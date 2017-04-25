#ifndef MPACK_MEMORY_H
#define MPACK_MEMORY_H

#include "mpack-common.h"

MPACK_HEADER_START

typedef void* (*mpack_proc_malloc)(size_t);
typedef void* (*mpack_proc_calloc)(size_t, size_t);
typedef void* (*mpack_proc_realloc)(void*, size_t);
typedef void (*mpack_proc_free)(void*);

void mpack_set_handler_malloc(mpack_proc_malloc proc);
void mpack_set_handler_calloc(mpack_proc_calloc proc);
void mpack_set_handler_realloc(mpack_proc_realloc proc);
void mpack_set_handler_free(mpack_proc_free proc);

extern mpack_proc_malloc proc_malloc;
extern mpack_proc_calloc proc_calloc;
extern mpack_proc_realloc proc_realloc;
extern mpack_proc_free proc_free;

MPACK_HEADER_END

#endif
