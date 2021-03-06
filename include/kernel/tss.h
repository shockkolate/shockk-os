#ifndef TSS_H
#define TSS_H

#include <stdint.h>
#include <kernel/pager.h>

struct TSS {
	uint32_t previous_tss; /* reference to previous TSS used for hardware task switching */
	uint32_t esp0; /* stack pointer to load when switching to kernel mode */
	uint32_t ss0;  /* stack segment to load when switching to kernel mode */
	uint32_t esp1; /* everything below is used for hardware task switching */
	uint32_t ss1;
	uint32_t esp2;
	uint32_t ss2;
	uint32_t cr3;
	uint32_t eip;
	uint32_t eflags;
	uint32_t eax;
	uint32_t ecx;
	uint32_t edx;
	uint32_t ebx;
	uint32_t esp;
	uint32_t ebp;
	uint32_t esi;
	uint32_t edi;
	uint32_t es;
	uint32_t cs;
	uint32_t ss;
	uint32_t ds;
	uint32_t fs;
	uint32_t gs;
	uint32_t ldt;
	uint32_t trap;
	uint32_t iomap_base;
} __attribute__((packed));

void tss_init(struct TSS *, unsigned char *);

#endif
