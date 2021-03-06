#ifndef SCREEN_H
#define SCREEN_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#include <stdint.h>

#define SCREEN_ROWS 25
#define SCREEN_COLUMNS 80
#define SCREEN_CELLS (SCREEN_ROWS * SCREEN_COLUMNS)
#define SCREEN_BUFFER ((uint8_t *)0xB8000)

#define SCREEN_COORDS_TO_CELL(R, C) ((R) * SCREEN_COLUMNS + (C))
#define SCREEN_CELL_TO_ROW(C) ((C) / SCREEN_COLUMNS)

#define SCREEN_COLOR_DEFAULT 0x20
#define SCREEN_COLOR_USER    0x30
#define SCREEN_COLOR_ERROR   0x17

void screen_init(const uint8_t = SCREEN_COLOR_DEFAULT);
void screen_cursor_to(const unsigned short);
void screen_cursor_by(short, const uint8_t = SCREEN_COLOR_DEFAULT);
void screen_write_at(const unsigned short, const char, const uint8_t = SCREEN_COLOR_DEFAULT);
char screen_read_at(const unsigned short);
uint8_t screen_color_at(const unsigned short);
void screen_put(const char, const uint8_t = SCREEN_COLOR_DEFAULT);
void screen_print(const char *s, const uint8_t = SCREEN_COLOR_DEFAULT);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

#include <kernel/itoa.h>

class Screen {
private:
	size_t base = 16;
public:
	template<typename T>
	struct BinaryType {
		T value;
	};

	template<typename T>
	static BinaryType<T> Binary(T value) {
		return BinaryType<T>{value};
	}

	Screen(void) {
		screen_init();
	}

	friend Screen & operator<<(Screen &screen, const char c) {
		screen_put(c);
		return screen;
	}

	friend Screen & operator<<(Screen &screen, const uint8_t i) {
		return screen << static_cast<uint32_t>(i);
	}

	friend Screen & operator<<(Screen &screen, const uint16_t i) {
		return screen << static_cast<uint32_t>(i);
	}

	friend Screen & operator<<(Screen &screen, const uint32_t i) {
		char sz[64] = {0};
		uitoa(i, sz, (unsigned int)screen.base);

		switch(screen.base) {
		case 2:
			screen << "0b";
			break;
		case 8:
			screen << "0o";
			break;
		case 16:
			screen << "0x";
			break;
		default:
			break;
		}
		return screen << sz;
	}

	friend Screen & operator<<(Screen &screen, const int16_t i) {
		return screen << static_cast<int32_t>(i);
	}

	friend Screen & operator<<(Screen &screen, const int32_t i) {
		char sz[64] = {0};
		itoa(i, sz, (int)screen.base);

		switch(screen.base) {
		case 2:
			screen << "0b";
			break;
		case 8:
			screen << "0o";
			break;
		case 16:
			screen << "0x";
			break;
		default:
			break;
		}
		return screen << sz;
	}

	friend Screen & operator<<(Screen &screen, void *ptr) {
		return screen << reinterpret_cast<uint32_t>(ptr);
	}

	friend Screen & operator<<(Screen &screen, const char *sz) {
		screen_print(sz);
		return screen;
	}

	template<typename T>
	friend Screen & operator<<(Screen &screen, const BinaryType<T> &bin) {
		auto old_base = screen.base;

		screen.base = 2;
		screen << bin.value;
		screen.base = old_base;

		return screen;
	}
};

#endif

#endif
