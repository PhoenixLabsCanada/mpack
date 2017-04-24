#include "mpack-memory.h"
#include "mpack-platform.h"


mpack_proc_malloc proc_malloc = MPACK_MALLOC;
mpack_proc_calloc proc_calloc = 0;
mpack_proc_realloc proc_realloc = MPACK_REALLOC;
mpack_proc_free proc_free = MPACK_FREE;


void
mpack_set_handler_malloc(mpack_proc_malloc proc)
{
	proc_malloc = proc;
}


void
mpack_set_handler_calloc(mpack_proc_calloc proc)
{
	proc_calloc = proc;
}


void
mpack_set_handler_realloc(mpack_proc_realloc proc)
{
	proc_realloc = proc;
}


void
mpack_set_handler_free(mpack_proc_free proc)
{
	proc_free = proc;
}

