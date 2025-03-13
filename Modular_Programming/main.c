#include <stdio.h>

// before:
// int add(int x, int y);
// int subtract(int x, int y);


// after:
// notice the double quotes instead of angular brackets
#include "basic_math.h"

// command line to compile both main.c and basic_math.c and link them together
// gcc main.c badic_math.c
// or
// gcc main.c basic_math.c -o main

void main(){
    printf("3 + 5 = %d\n", add(3,5));
    printf("9 - 4 = %d\n", subtract(9, 4));
}

// before:
// int add(int a, int b){
//     return a + b ;
// }

// before:
// int subtract(int a, int b){
//     return a - b ;
// }