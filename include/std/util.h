#ifndef __OX_STD_UTIL_H__
#define __OX_STD_UTIL_H__
#include"types.h"
#define OX_NOT_ZERO(N)(((N|(~N+1))>>(OX_PTR_BITS-1))&1)
#define OX_MIN(X,Y)(Y+((X-Y)&((X-Y)>>(OX_PTR_BITS-1))))
#define OX_MAX(X,Y)(X-((X-Y)&((X-Y)>>(OX_PTR_BITS-1))))
#define OX_ISBASE2(N)((N&(N-1))==0)
ox_global ox_uxx_t ox_std_tobase2(ox_uxx_t n);
#endif/*__OX_STD_UTIL_H__*/