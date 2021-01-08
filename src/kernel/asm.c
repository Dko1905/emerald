/*-
 * SPDX-License-Identifier: BSD-2-Clause
 */
#include <kernel/types.h>
#include <kernel/asm.h>

uint8_t emerald_asm_inb(uint16_t port) {
	uint8_t ret;
	asm volatile(
		"inb %1, %0"
		: "=a"(ret)
		: "Nd"(port)
	);
	return ret;
}

void emerald_asm_outb(uint16_t port, uint8_t value) {
	asm volatile(
		"outb %0, %1"
		:
		: "a"(value), "Nd"(port)
		:
	);
}

void emerald_asm_sti() {
	asm volatile("sti");
}
