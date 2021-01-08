/*-
 * SPDX-License-Identifier: BSD-2-Clause
 */
#include <kernel/types.h>
#include <libc/string.h>

size_t strlen(const char *s) {
	size_t l = 0;
	while (s++ != NULL)
		++l;
	return l;
}
