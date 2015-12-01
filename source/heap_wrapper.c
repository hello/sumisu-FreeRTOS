#include "heap.h"

void * os_malloc(size_t sz){
    return (void*)pvPortMalloc(sz);
}
void os_free(void * ptr){
    vPortFree(ptr);
}
