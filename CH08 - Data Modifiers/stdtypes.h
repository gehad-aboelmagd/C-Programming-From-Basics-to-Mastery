
/* ################# unsigned integers definitions ################# */

typedef unsigned char u8;
typedef unsigned short u16;
// int, long have the same size on this machine
// it is enough to give alias to only one of them
typedef unsigned int u32; 
// or
// typedef unsigned long u32;
typedef unsigned long long u64;

/* ################# signed integers definitions ################# */

typedef signed char s8;
typedef signed short s16;
// int, long have the same size on this machine
// it is enough to give alias to only one of them
typedef signed int s32; 
// or
// typedef signed long s32;
typedef signed long long s64;

/* ################# floating point definitions ################# */

typedef float f32;
typedef double f64;
typedef long double f96;
