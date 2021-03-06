#include <kernel/ports.h>

uint8_t ports_inb(unsigned short port) {
	uint8_t result;
	__asm__ __volatile__ ("in %1, %0" : "=a" (result) : "d" (port));
	return result;
}

uint16_t ports_ins(unsigned short port) {
	uint16_t result;
	__asm__ __volatile__ ("in %1, %0" : "=a" (result) : "d" (port));
	return result;
}

uint32_t ports_inl(unsigned short port) {
	uint32_t result;
	__asm__ __volatile__ ("in %1, %0" : "=a" (result) : "d" (port));
	return result;
}

void ports_str_ins(unsigned short port, volatile uint16_t *buffer, size_t count) {
	__asm__ ("rep insw" : : "d" (port), "c" (count), "D" (buffer) : "memory");
}

void ports_outb(unsigned short port, uint8_t data) {
	__asm__ ("out %0, %1" : : "a" (data), "d" (port));
}

void ports_outs(unsigned short port, uint16_t data) {
	__asm__ ("out %0, %1" : : "a" (data), "d" (port));
}

void ports_outl(unsigned short port, uint32_t data) {
	__asm__ ("out %0, %1" : : "a" (data), "d" (port));
}
