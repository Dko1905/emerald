/*-
 * SPDX-License-Identifier: MIT
 *
 * MIT License
 *
 * Copyright (c) 2020 Abb1x
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include <kernel/mem/pmm.h>
#include <kernel/info.h>

#include <libc/stdlib.h>

uint8_t *bitmap = (uint8_t *)(&end);
uint8_t *mem_start = NULL;
uint32_t total_blocks = 0;
uint32_t bitmap_size = 0;
uint32_t last_free_block = 0;

void emerald_pmm_init(uint32_t mem_size) {
	total_blocks = mem_size / BLOCK_SIZE;
	bitmap_size = total_blocks / BLOCKS_PER_BUCKET;
	
	if (bitmap_size * BLOCKS_PER_BUCKET < total_blocks)
		bitmap_size++;
	
	memset(bitmap, 0, bitmap_size);

	int mb = mem_size / (1024 * 1024);
	info("Initializing PMM.");
	info(
		"Bitmap adress = %d,Memory size = %d mb,Bitmap size = %d",
		bitmap, mb, bitmap_size
	);
}

uint32_t emerald_pmm_allocate_block() {
	uint32_t free_block = emerald_pmm_first_free_block();
	SETBIT(free_block);
	return free_block;
}

void emerald_pmm_free_block(uint32_t blk_num) {
	CLEARBIT(block_num);
}

uint32_t emerald_pmm_first_free_block() {
	uint32_t i;
	for (i = last_free_block; i < total_blocks; i++)
	{
		if (!ISSET(i))
		{
			last_free_block = i;
			return i;
		}
	}
	last_free_block = 0;
	return emerald_pmm_first_free_block();
}
