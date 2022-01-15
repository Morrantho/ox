#ifndef __OX_MEM_H__
#define __OX_MEM_H__
#include"../std/types.h"
#define OX_BITR(N,B)((N>>B)&1)
#define OX_BITW(N,B)(N|=(1<<B))
#define OX_BITC(N,B)(N&=~(1<<B))
#define OX_BITT(N,B)(N^=(1<<B))
ox_global ox_void_t ox_mem_fill(ox_u8_p,ox_u32_t,ox_u8_t);
ox_global ox_void_t ox_mem_copy(ox_u8_p,ox_u32_t,ox_u8_p);
#endif/*__OX_MEM_H__*/