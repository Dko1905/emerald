/*-
 * SPDX-License-Identifier: BSD-2-Clause
 */
#include <libc/stdarg.h>

#include <util/info.h>

static const char INFO_PREFIX[] = "INFO: ";
static const char ERR_PREFIX[] = "ERR: ";

void info(const char *fmt, ...) {
	va_list va;

	va_start(va, fmt);

	/* To be implemented. */

	va_end(va);
}

void err(const char *fmt, ...) {
	va_list va;

	va_start(va, fmt);

	/* To be implemented. */

	va_end(va);
}
