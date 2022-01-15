#ifndef __OX_STD_TYPES_H__
#define __OX_STD_TYPES_H__
#include<stdarg.h>
#define ox_local static
#define ox_global extern
#define ox_u8_t unsigned char
#define ox_u8_p unsigned char*
#define ox_u8_p2 unsigned char**
#define ox_u16_t unsigned short
#define ox_u16_p unsigned short*
#define ox_u16_p2 unsigned short**
#define ox_u32_t unsigned int
#define ox_u32_p unsigned int*
#define ox_u32_p2 unsigned int**
#define ox_i8_t char
#define ox_i8_p char*
#define ox_i8_p2 char**
#define ox_i16_t short
#define ox_i16_p short*
#define ox_i16_p2 short**
#define ox_i32_t int
#define ox_i32_p int*
#define ox_i32_p2 int**
#ifdef OX32
	#define ox_uxx_t ox_u32_t
	#define ox_uxx_p ox_u32_p
	#define ox_uxx_p2 ox_u32_p2
	#define ox_ixx_t ox_i32_t
	#define ox_ixx_p ox_i32_p
	#define ox_ixx_p2 ox_i32_p2
	#define OX_PTR_BITS 32
	#define OX_PTR_BYTES 4
#else
	#define ox_u64_t unsigned long long int
	#define ox_u64_p unsigned long long int*
	#define ox_u64_p2 unsigned long long int**
	#define ox_i64_t long long int
	#define ox_i64_p long long int*
	#define ox_i64_p2 long long int**
	#define ox_uxx_t ox_u64_t
	#define ox_uxx_p ox_u64_p
	#define ox_uxx_p2 ox_u64_p2
	#define ox_ixx_t ox_i64_t
	#define ox_ixx_p ox_i64_p
	#define ox_ixx_p2 ox_i64_p2
	#define OX_PTR_BITS 64
	#define OX_PTR_BYTES 8
#endif
#define ox_f32_t float
#define ox_f32_p float*
#define ox_f32_p2 float**
#define ox_f64_t double
#define ox_f64_p double*
#define ox_f64_p2 double**
#define ox_void_t void
#define ox_void_p void*
#define ox_void_p2 void**
#define ox_fn_p ox_void_p (*ox__fn_p)(ox_uxx_t,...) /* Try to make this work w/o recursion blowing up */
#endif/*__OX_STD_TYPES_H__*/