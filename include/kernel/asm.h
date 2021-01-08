/*-
 * SPDX-License-Identifier: BSD-2-Clause
 */
#ifndef KERNEL_ASM_H
#define KERNEL_ASM_H

#include <sys/types.h>

uint8_t asm_inb(uint16_t _port);
void asm_outb(uint16_t _port, uint8_t _value);
void asm_sti();

#endif