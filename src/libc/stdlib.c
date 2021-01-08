/*-
 * SPDX-License-Identifier: BSD-2-Clause
 */
#include <libc/stdlib.h>

void memset(void *s, int c, size_t n) {
	uint8_t *p = s;
	uint8_t *end = p + n;
	while (p < end) {
		*p = (uint8_t)c;
		++p;
	}
}
