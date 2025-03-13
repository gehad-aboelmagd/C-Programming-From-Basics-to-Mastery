/*
Use typedef keyword to define our new types.
Then print their sizes using the sizeof operator
to ensure they are correctly defined.
*/

#include <stdio.h>
#include "stdtypes.h"

void check_for_correct_types_definitions() {
    printf("u8: %d\n", sizeof(u8));
    printf("u16: %d\n", sizeof(u16));
    printf("u32: %d\n", sizeof(u32));
    printf("u64: %d\n\n", sizeof(u64));

    printf("s8: %d\n", sizeof(s8));
    printf("s16: %d\n", sizeof(s16));
    printf("s32: %d\n", sizeof(s32));
    printf("s64: %d\n\n", sizeof(s64));

    printf("f32: %d\n", sizeof(f32));
    printf("f64: %d\n", sizeof(f64));
    printf("f96: %d\n\n", sizeof(f96));
}

void main() {
    check_for_correct_types_definitions();
}