#include <idt.h>
#include <screen.h>

extern void isr0(void);
extern void isr1(void);
extern void isr2(void);
extern void isr3(void);
extern void isr4(void);
extern void isr5(void);
extern void isr6(void);
extern void isr7(void);
extern void isr8(void);
extern void isr9(void);
extern void isr10(void);
extern void isr11(void);
extern void isr12(void);
extern void isr13(void);
extern void isr14(void);
extern void isr15(void);
extern void isr16(void);
extern void isr17(void);
extern void isr18(void);
extern void isr19(void);
extern void isr20(void);
extern void isr21(void);
extern void isr22(void);
extern void isr23(void);
extern void isr24(void);
extern void isr25(void);
extern void isr26(void);
extern void isr27(void);
extern void isr28(void);
extern void isr29(void);
extern void isr30(void);
extern void isr31(void);
extern void isr32(void);
extern void isr33(void);
extern void isr34(void);
extern void isr35(void);
extern void isr36(void);
extern void isr37(void);
extern void isr38(void);
extern void isr39(void);
extern void isr40(void);
extern void isr41(void);
extern void isr42(void);
extern void isr43(void);
extern void isr44(void);
extern void isr45(void);
extern void isr46(void);
extern void isr47(void);
extern void isr48(void);
extern void isr49(void);
extern void isr50(void);
extern void isr51(void);
extern void isr52(void);
extern void isr53(void);
extern void isr54(void);
extern void isr55(void);
extern void isr56(void);
extern void isr57(void);
extern void isr58(void);
extern void isr59(void);
extern void isr60(void);
extern void isr61(void);
extern void isr62(void);
extern void isr63(void);
extern void isr64(void);
extern void isr65(void);
extern void isr66(void);
extern void isr67(void);
extern void isr68(void);
extern void isr69(void);
extern void isr70(void);
extern void isr71(void);
extern void isr72(void);
extern void isr73(void);
extern void isr74(void);
extern void isr75(void);
extern void isr76(void);
extern void isr77(void);
extern void isr78(void);
extern void isr79(void);
extern void isr80(void);
extern void isr81(void);
extern void isr82(void);
extern void isr83(void);
extern void isr84(void);
extern void isr85(void);
extern void isr86(void);
extern void isr87(void);
extern void isr88(void);
extern void isr89(void);
extern void isr90(void);
extern void isr91(void);
extern void isr92(void);
extern void isr93(void);
extern void isr94(void);
extern void isr95(void);
extern void isr96(void);
extern void isr97(void);
extern void isr98(void);
extern void isr99(void);
extern void isr100(void);
extern void isr101(void);
extern void isr102(void);
extern void isr103(void);
extern void isr104(void);
extern void isr105(void);
extern void isr106(void);
extern void isr107(void);
extern void isr108(void);
extern void isr109(void);
extern void isr110(void);
extern void isr111(void);
extern void isr112(void);
extern void isr113(void);
extern void isr114(void);
extern void isr115(void);
extern void isr116(void);
extern void isr117(void);
extern void isr118(void);
extern void isr119(void);
extern void isr120(void);
extern void isr121(void);
extern void isr122(void);
extern void isr123(void);
extern void isr124(void);
extern void isr125(void);
extern void isr126(void);
extern void isr127(void);
extern void isr128(void);
extern void isr129(void);
extern void isr130(void);
extern void isr131(void);
extern void isr132(void);
extern void isr133(void);
extern void isr134(void);
extern void isr135(void);
extern void isr136(void);
extern void isr137(void);
extern void isr138(void);
extern void isr139(void);
extern void isr140(void);
extern void isr141(void);
extern void isr142(void);
extern void isr143(void);
extern void isr144(void);
extern void isr145(void);
extern void isr146(void);
extern void isr147(void);
extern void isr148(void);
extern void isr149(void);
extern void isr150(void);
extern void isr151(void);
extern void isr152(void);
extern void isr153(void);
extern void isr154(void);
extern void isr155(void);
extern void isr156(void);
extern void isr157(void);
extern void isr158(void);
extern void isr159(void);
extern void isr160(void);
extern void isr161(void);
extern void isr162(void);
extern void isr163(void);
extern void isr164(void);
extern void isr165(void);
extern void isr166(void);
extern void isr167(void);
extern void isr168(void);
extern void isr169(void);
extern void isr170(void);
extern void isr171(void);
extern void isr172(void);
extern void isr173(void);
extern void isr174(void);
extern void isr175(void);
extern void isr176(void);
extern void isr177(void);
extern void isr178(void);
extern void isr179(void);
extern void isr180(void);
extern void isr181(void);
extern void isr182(void);
extern void isr183(void);
extern void isr184(void);
extern void isr185(void);
extern void isr186(void);
extern void isr187(void);
extern void isr188(void);
extern void isr189(void);
extern void isr190(void);
extern void isr191(void);
extern void isr192(void);
extern void isr193(void);
extern void isr194(void);
extern void isr195(void);
extern void isr196(void);
extern void isr197(void);
extern void isr198(void);
extern void isr199(void);
extern void isr200(void);
extern void isr201(void);
extern void isr202(void);
extern void isr203(void);
extern void isr204(void);
extern void isr205(void);
extern void isr206(void);
extern void isr207(void);
extern void isr208(void);
extern void isr209(void);
extern void isr210(void);
extern void isr211(void);
extern void isr212(void);
extern void isr213(void);
extern void isr214(void);
extern void isr215(void);
extern void isr216(void);
extern void isr217(void);
extern void isr218(void);
extern void isr219(void);
extern void isr220(void);
extern void isr221(void);
extern void isr222(void);
extern void isr223(void);
extern void isr224(void);
extern void isr225(void);
extern void isr226(void);
extern void isr227(void);
extern void isr228(void);
extern void isr229(void);
extern void isr230(void);
extern void isr231(void);
extern void isr232(void);
extern void isr233(void);
extern void isr234(void);
extern void isr235(void);
extern void isr236(void);
extern void isr237(void);
extern void isr238(void);
extern void isr239(void);
extern void isr240(void);
extern void isr241(void);
extern void isr242(void);
extern void isr243(void);
extern void isr244(void);
extern void isr245(void);
extern void isr246(void);
extern void isr247(void);
extern void isr248(void);
extern void isr249(void);
extern void isr250(void);
extern void isr251(void);
extern void isr252(void);
extern void isr253(void);
extern void isr254(void);
extern void isr255(void);

static struct idt_entry entries[256];
static struct idt_pointer pointer;

void idt_set_gate(uint8_t i, uint32_t offset, uint16_t selector,
                  uint8_t gate_type, uint8_t storage, uint8_t privilege,
                  uint8_t present)
{
	entries[i].offset_low  = offset & 0xFFFF;
	entries[i].offset_high = (offset >> 16) & 0xFFFF;
	entries[i].selector = selector;
	entries[i].reserved = 0;
	entries[i].gate_type = gate_type;
	entries[i].storage = storage;
	entries[i].privilege = privilege;
	entries[i].present = present;
}

void idt_init(void)
{
	pointer.limit = sizeof(struct idt_entry) * 256 - 1;
	pointer.base = (uint32_t)&entries;

	idt_set_gate(0,   (uint32_t)isr0,   0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(1,   (uint32_t)isr1,   0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(2,   (uint32_t)isr2,   0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(3,   (uint32_t)isr3,   0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(4,   (uint32_t)isr4,   0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(5,   (uint32_t)isr5,   0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(6,   (uint32_t)isr6,   0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(7,   (uint32_t)isr7,   0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(8,   (uint32_t)isr8,   0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(9,   (uint32_t)isr9,   0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(10,  (uint32_t)isr10,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(11,  (uint32_t)isr11,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(12,  (uint32_t)isr12,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(13,  (uint32_t)isr13,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(14,  (uint32_t)isr14,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(15,  (uint32_t)isr15,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(16,  (uint32_t)isr16,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(17,  (uint32_t)isr17,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(18,  (uint32_t)isr18,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(19,  (uint32_t)isr19,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(20,  (uint32_t)isr20,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(21,  (uint32_t)isr21,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(22,  (uint32_t)isr22,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(23,  (uint32_t)isr23,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(24,  (uint32_t)isr24,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(25,  (uint32_t)isr25,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(26,  (uint32_t)isr26,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(27,  (uint32_t)isr27,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(28,  (uint32_t)isr28,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(29,  (uint32_t)isr29,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(30,  (uint32_t)isr30,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(31,  (uint32_t)isr31,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(32,  (uint32_t)isr32,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(33,  (uint32_t)isr33,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(34,  (uint32_t)isr34,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(35,  (uint32_t)isr35,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(36,  (uint32_t)isr36,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(37,  (uint32_t)isr37,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(38,  (uint32_t)isr38,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(39,  (uint32_t)isr39,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(40,  (uint32_t)isr40,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(41,  (uint32_t)isr41,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(42,  (uint32_t)isr42,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(43,  (uint32_t)isr43,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(44,  (uint32_t)isr44,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(45,  (uint32_t)isr45,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(46,  (uint32_t)isr46,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(47,  (uint32_t)isr47,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(48,  (uint32_t)isr48,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(49,  (uint32_t)isr49,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(50,  (uint32_t)isr50,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(51,  (uint32_t)isr51,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(52,  (uint32_t)isr52,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(53,  (uint32_t)isr53,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(54,  (uint32_t)isr54,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(55,  (uint32_t)isr55,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(56,  (uint32_t)isr56,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(57,  (uint32_t)isr57,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(58,  (uint32_t)isr58,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(59,  (uint32_t)isr59,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(60,  (uint32_t)isr60,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(61,  (uint32_t)isr61,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(62,  (uint32_t)isr62,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(63,  (uint32_t)isr63,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(64,  (uint32_t)isr64,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(65,  (uint32_t)isr65,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(66,  (uint32_t)isr66,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(67,  (uint32_t)isr67,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(68,  (uint32_t)isr68,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(69,  (uint32_t)isr69,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(70,  (uint32_t)isr70,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(71,  (uint32_t)isr71,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(72,  (uint32_t)isr72,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(73,  (uint32_t)isr73,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(74,  (uint32_t)isr74,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(75,  (uint32_t)isr75,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(76,  (uint32_t)isr76,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(77,  (uint32_t)isr77,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(78,  (uint32_t)isr78,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(79,  (uint32_t)isr79,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(80,  (uint32_t)isr80,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(81,  (uint32_t)isr81,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(82,  (uint32_t)isr82,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(83,  (uint32_t)isr83,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(84,  (uint32_t)isr84,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(85,  (uint32_t)isr85,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(86,  (uint32_t)isr86,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(87,  (uint32_t)isr87,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(88,  (uint32_t)isr88,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(89,  (uint32_t)isr89,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(90,  (uint32_t)isr90,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(91,  (uint32_t)isr91,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(92,  (uint32_t)isr92,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(93,  (uint32_t)isr93,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(94,  (uint32_t)isr94,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(95,  (uint32_t)isr95,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(96,  (uint32_t)isr96,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(97,  (uint32_t)isr97,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(98,  (uint32_t)isr98,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(99,  (uint32_t)isr99,  0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(100, (uint32_t)isr100, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(101, (uint32_t)isr101, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(102, (uint32_t)isr102, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(103, (uint32_t)isr103, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(104, (uint32_t)isr104, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(105, (uint32_t)isr105, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(106, (uint32_t)isr106, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(107, (uint32_t)isr107, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(108, (uint32_t)isr108, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(109, (uint32_t)isr109, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(110, (uint32_t)isr110, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(111, (uint32_t)isr111, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(112, (uint32_t)isr112, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(113, (uint32_t)isr113, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(114, (uint32_t)isr114, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(115, (uint32_t)isr115, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(116, (uint32_t)isr116, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(117, (uint32_t)isr117, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(118, (uint32_t)isr118, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(119, (uint32_t)isr119, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(120, (uint32_t)isr120, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(121, (uint32_t)isr121, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(122, (uint32_t)isr122, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(123, (uint32_t)isr123, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(124, (uint32_t)isr124, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(125, (uint32_t)isr125, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(126, (uint32_t)isr126, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(127, (uint32_t)isr127, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(128, (uint32_t)isr128, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(129, (uint32_t)isr129, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(130, (uint32_t)isr130, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(131, (uint32_t)isr131, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(132, (uint32_t)isr132, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(133, (uint32_t)isr133, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(134, (uint32_t)isr134, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(135, (uint32_t)isr135, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(136, (uint32_t)isr136, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(137, (uint32_t)isr137, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(138, (uint32_t)isr138, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(139, (uint32_t)isr139, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(140, (uint32_t)isr140, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(141, (uint32_t)isr141, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(142, (uint32_t)isr142, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(143, (uint32_t)isr143, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(144, (uint32_t)isr144, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(145, (uint32_t)isr145, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(146, (uint32_t)isr146, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(147, (uint32_t)isr147, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(148, (uint32_t)isr148, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(149, (uint32_t)isr149, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(150, (uint32_t)isr150, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(151, (uint32_t)isr151, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(152, (uint32_t)isr152, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(153, (uint32_t)isr153, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(154, (uint32_t)isr154, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(155, (uint32_t)isr155, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(156, (uint32_t)isr156, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(157, (uint32_t)isr157, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(158, (uint32_t)isr158, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(159, (uint32_t)isr159, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(160, (uint32_t)isr160, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(161, (uint32_t)isr161, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(162, (uint32_t)isr162, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(163, (uint32_t)isr163, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(164, (uint32_t)isr164, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(165, (uint32_t)isr165, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(166, (uint32_t)isr166, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(167, (uint32_t)isr167, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(168, (uint32_t)isr168, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(169, (uint32_t)isr169, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(170, (uint32_t)isr170, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(171, (uint32_t)isr171, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(172, (uint32_t)isr172, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(173, (uint32_t)isr173, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(174, (uint32_t)isr174, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(175, (uint32_t)isr175, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(176, (uint32_t)isr176, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(177, (uint32_t)isr177, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(178, (uint32_t)isr178, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(179, (uint32_t)isr179, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(180, (uint32_t)isr180, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(181, (uint32_t)isr181, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(182, (uint32_t)isr182, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(183, (uint32_t)isr183, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(184, (uint32_t)isr184, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(185, (uint32_t)isr185, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(186, (uint32_t)isr186, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(187, (uint32_t)isr187, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(188, (uint32_t)isr188, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(189, (uint32_t)isr189, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(190, (uint32_t)isr190, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(191, (uint32_t)isr191, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(192, (uint32_t)isr192, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(193, (uint32_t)isr193, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(194, (uint32_t)isr194, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(195, (uint32_t)isr195, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(196, (uint32_t)isr196, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(197, (uint32_t)isr197, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(198, (uint32_t)isr198, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(199, (uint32_t)isr199, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(200, (uint32_t)isr200, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(201, (uint32_t)isr201, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(202, (uint32_t)isr202, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(203, (uint32_t)isr203, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(204, (uint32_t)isr204, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(205, (uint32_t)isr205, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(206, (uint32_t)isr206, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(207, (uint32_t)isr207, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(208, (uint32_t)isr208, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(209, (uint32_t)isr209, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(210, (uint32_t)isr210, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(211, (uint32_t)isr211, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(212, (uint32_t)isr212, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(213, (uint32_t)isr213, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(214, (uint32_t)isr214, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(215, (uint32_t)isr215, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(216, (uint32_t)isr216, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(217, (uint32_t)isr217, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(218, (uint32_t)isr218, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(219, (uint32_t)isr219, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(220, (uint32_t)isr220, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(221, (uint32_t)isr221, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(222, (uint32_t)isr222, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(223, (uint32_t)isr223, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(224, (uint32_t)isr224, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(225, (uint32_t)isr225, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(226, (uint32_t)isr226, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(227, (uint32_t)isr227, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(228, (uint32_t)isr228, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(229, (uint32_t)isr229, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(230, (uint32_t)isr230, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(231, (uint32_t)isr231, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(232, (uint32_t)isr232, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(233, (uint32_t)isr233, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(234, (uint32_t)isr234, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(235, (uint32_t)isr235, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(236, (uint32_t)isr236, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(237, (uint32_t)isr237, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(238, (uint32_t)isr238, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(239, (uint32_t)isr239, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(240, (uint32_t)isr240, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(241, (uint32_t)isr241, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(242, (uint32_t)isr242, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(243, (uint32_t)isr243, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(244, (uint32_t)isr244, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(245, (uint32_t)isr245, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(246, (uint32_t)isr246, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(247, (uint32_t)isr247, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(248, (uint32_t)isr248, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(249, (uint32_t)isr249, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(250, (uint32_t)isr250, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(251, (uint32_t)isr251, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(252, (uint32_t)isr252, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(253, (uint32_t)isr253, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(254, (uint32_t)isr254, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);
	idt_set_gate(255, (uint32_t)isr255, 0x8, IDT_TYPE_INTERRUPT_32, 0, 0, 1);

	idt_load(&pointer);
}

struct cpu_state * idt_isr_callback(struct cpu_state *state)
{
	screen_putc('a');
	return state;
}
