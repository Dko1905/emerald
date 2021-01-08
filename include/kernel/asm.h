/*-
 * SPDX-License-Identifier: BSD-2-Clause
 */
#ifndef KERNEL_ASM_H
#define KERNEL_ASM_H

#include <kernel/types.h>

uint8_t emerald_asm_inb(uint16_t _port);
void emerald_asm_outb(uint16_t _port, uint8_t _value);
void emerald_asm_sti();

#endif