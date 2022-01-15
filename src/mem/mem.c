#include"../../include/mem/mem.h"
#include"../../include/std/shorttypes.h"

#define fill ox_mem_fill
#define copy ox_mem_copy

void_t fill(u8_p block,u32_t bytes,u8_t data)
{
	u32_t i;
	for(i=0;i<bytes;i++) *(u8_p)(block+i)=data;
}

void_t copy(u8_p from,u32_t bytes,u8_p to)
{
	u32_t i;
	for(i=0;i<bytes;i++) *(u8_p)(to+i)=*(u8_p)(from+i);
}