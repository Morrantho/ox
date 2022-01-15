#ifndef __OX_CPU_H__
#define __OX_CPU_H__
#include<stdarg.h>
#include<windows.h>
/*
#ifdef OX_WIN
#include<windows.h>
#else
#endif
*/
#include"../std/types.h"
ox_global ox_f64_t ox_cpu_get_frequency();
ox_global ox_f64_t ox_cpu_get_ticks();
ox_global ox_f64_t ox_cpu_get_seconds(ox_f64_t,ox_f64_t);	/* s */
ox_global ox_f64_t ox_cpu_get_millis(ox_f64_t,ox_f64_t);	/* ms */
ox_global ox_f64_t ox_cpu_get_micros(ox_f64_t,ox_f64_t);	/* us */
ox_global ox_f64_t ox_cpu_get_nanos(ox_f64_t,ox_f64_t);		/* ns */
#endif/*__OX_CPU_H__*/