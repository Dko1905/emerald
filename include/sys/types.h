/*-
 * SPDX-License-Identifier: BSD-2-Clause
 */
#ifndef SYS_TYPES_H
#define SYS_TYPES_H

#ifdef __INT8_TYPE__
typedef __INT8_TYPE__ int8_t;
#else
#	err "Could not define int8_t!"
#endif
#ifdef __UINT8_TYPE__
typedef __UINT8_TYPE__ uint8_t;
#else
#	err "Could not define uint8_t!"
#endif

#ifdef __INT16_TYPE__
typedef __INT16_TYPE__ int16_t;
#else
#	err "Could not define int16_t!"
#endif
#ifdef __UINT16_TYPE__
typedef __UINT16_TYPE__ uint16_t;
#else
#	err "Could not define uint16_t!"
#endif

#ifdef __INT32_TYPE__
typedef __INT32_TYPE__ int32_t;
#else
#	err "Could not define int32_t!"
#endif
#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ uint32_t;
#else
#	err "Could not define uint32_t!"
#endif

#ifdef __INT64_TYPE__
typedef __INT64_TYPE__ int64_t;
#else
#	err "Could not define int64_t!"
#endif
#ifdef __UINT64_TYPE__
typedef __UINT64_TYPE__ uint64_t;
#else
#	err "Could not define uint64_t!"
#endif

typedef uint64_t size_t;

#ifndef NULL
#define NULL (void *)0
#endif

#endif
