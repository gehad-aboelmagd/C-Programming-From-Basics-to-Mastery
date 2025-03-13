/*
Write a C program to print the size of all basic data types.
*/

#include <stdio.h>

void main() {
    printf("size of char is %d byte(s)\n", sizeof(char));
    printf("size of int is %d byte(s)\n", sizeof(int));
    printf("size of float is %d byte(s)\n", sizeof(float));
    printf("size of double is %d byte(s)\n", sizeof(double));
}
