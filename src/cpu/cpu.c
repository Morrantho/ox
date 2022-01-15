#include<stdio.h>
#include"../../include/cpu/cpu.h"
#include"../../include/std/shorttypes.h"

#define get_frequency ox_cpu_get_frequency
#define get_ticks ox_cpu_get_ticks
#define get_seconds ox_cpu_get_seconds
#define get_millis ox_cpu_get_millis
#define get_micros ox_cpu_get_micros
#define get_nanos ox_cpu_get_nanos

local f64_t frequency=0;
local LARGE_INTEGER _f;

f64_t get_frequency()
{
	if(frequency) return frequency;
	QueryPerformanceFrequency(&_f);
	frequency=1/(f64_t)_f.LowPart+(f64_t)0xFFFFFFFF*_f.HighPart;
	return frequency;
}

f64_t get_ticks()
{
	LARGE_INTEGER t;
	QueryPerformanceCounter(&t);
	return (f64_t)t.LowPart+(f64_t)0xFFFFFFFF*t.HighPart;
}

f64_t get_seconds(f64_t start,f64_t end)
{
	return (end-start)*frequency;
}

f64_t get_millis(f64_t start,f64_t end)
{
	return ((end-start)*1000)*frequency;
}

f64_t get_micros(f64_t start,f64_t end)
{
	return ((end-start)*1000000)*frequency;
}

f64_t get_nanos(f64_t start,f64_t end)
{
	return ((end-start)*1000000000)*frequency;
}