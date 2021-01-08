/*-
 * SPDX-License-Identifier: BSD-2-Clause
 */
#include <sys/types.h>

#include <util/asm.h>

uint8_t asm_inb(uint16_t port) {
	uint8_t ret;
	asm volatile(
		"inb %1, %0"
		: "=a"(ret)
		: "Nd"(port)
	);
	return ret;
}

void asm_outb(uint16_t port, uint8_t value) {
	asm volatile(
		"outb %0, %1"
		:
		: "a"(value), "Nd"(port)
		:
	);
}

void asm_sti() {
	asm volatile("sti");
}
