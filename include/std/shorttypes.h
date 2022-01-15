#ifndef __OX_STD_SHORTTYPES_H__
#define __OX_STD_SHORTTYPES_H__
/* Dont ever use me in another header. */
#include"types.h"
#define global ox_global
#define local ox_local
#define u8_t ox_u8_t
#define u8_p ox_u8_p
#define u8_p2 ox_u8_p2
#define u16_t ox_u16_t
#define u16_p ox_u16_p
#define u16_p2 ox_u16_p2
#define u32_t ox_u32_t
#define u32_p ox_u32_p
#define u32_p2 ox_u32_p2
#define uxx_t ox_uxx_t
#define uxx_p ox_uxx_p
#define uxx_p2 ox_uxx_p2
#define i8_t ox_i8_t
#define i8_p ox_i8_p
#define i8_p2 ox_i8_p2
#define i16_t ox_i16_t
#define i16_p ox_i16_p
#define i16_p2 ox_i16_p2
#define i32_t ox_i32_t
#define i32_p ox_i32_p
#define i32_p2 ox_i32_p2
#define ixx_t ox_ixx_t
#define ixx_p ox_ixx_p
#define ixx_p2 ox_ixx_p2
#ifdef OX32
#else
	#define u64_t ox_u64_t
	#define u64_p ox_u64_p
	#define u64_p2 ox_u64_p2
	#define i64_t ox_i64_t
	#define i64_p ox_i64_p
	#define i64_p2 ox_i64_p2
#endif
#define f32_t ox_f32_t
#define f32_p ox_f32_p
#define f32_p2 ox_f32_p2
#define f64_t ox_f64_t
#define f64_p ox_f64_p
#define f64_p2 ox_f64_p2
#define void_t ox_void_t
#define void_p ox_void_p
#define void_p2 ox_void_p2
#define fn_p ox_fn_p
#endif/*__OX_STD_SHORTTYPES_H__*/