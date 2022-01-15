#include"../../include/std/util.h"
#include"../../include/std/shorttypes.h"

uxx_t ox_std_tobase2(uxx_t n)
{
	uxx_t k;
	for(k=0;n;n>>=1,k++){}
	return 1<<k;
}