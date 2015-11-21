#include "tss.h"

void tss_init(volatile struct TSS *tss) {
	for(unsigned int i = 0; i < sizeof(struct TSS); ++i) {
		((unsigned char *)tss)[i] = 0;
	}
	tss->ss0 = 0x8;
	tss->esp0 = 0x90000;
	__asm__ __volatile__ ("ltr %%ax" : : "a" (0x2B));
}
