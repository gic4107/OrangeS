/***************************************************************
 * proto.h
 * author: liu, linhong
 **************************************************************/

/* symbol in 'lib/klib.asm' */
PUBLIC void out_byte(u16 port, u8 value);
PUBLIC u8 in_byte(u16 port);
PUBLIC void disp_str(char* info);
PUBLIC void disp_color_str(char* info, int color);

/* protect.c */
PUBLIC void init_prot();
PUBLIC u32 seg2phys(u16 seg);

/* klib.c */
PUBLIC void delay(int time);

/* kernel.asm*/
void restart();

/* main .c*/
void TestA();
void TestB();
void TestC();

/* i8259.c */
PUBLIC void put_irq_handler(int irq, irq_handler handler);
PUBLIC void spurious_irq(int irq);

/* clock.c */
PUBLIC void clock_handler(int irq);

/* proc.c */
PUBLIC int sys_get_ticks();

/* syscall.asm */
PUBLIC void sys_call();
PUBLIC int get_ticks();
