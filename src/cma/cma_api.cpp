#include "cma_api.h"

#include <jemalloc/jemalloc.h>

size_t __stdcall MemTotalCommitted(void)
{
	return 0;
}

size_t __stdcall MemTotalReserved(void)
{
	return 0;
}

size_t __stdcall MemFlushCache(size_t /*size*/)
{
	return 0;
}

void __stdcall MemFlushCacheAll(void)
{
}

size_t __stdcall MemSize(void* mem)
{
	return je_malloc_usable_size(mem);
}

size_t __stdcall MemSizeA(void* mem, size_t /*align*/)
{
	return je_malloc_usable_size(mem);
}

void* __stdcall MemAlloc(size_t size)
{
	return je_malloc(size);
}

void* __stdcall MemAllocA(size_t size, size_t align)
{
	return je_aligned_alloc(align, size);
}

void __stdcall MemFree(void* mem)
{
	je_free(mem);
}

void __stdcall MemFreeA(void* mem)
{
	je_free(mem);
}
