/*
Could you expect the size of this struct?

Write a C program to print the size of a struct and verify 
that it meets your expectations.

After that modify the structure to achieve the minumum size. 
Can you see the difference?

Note:
Your tool chain considers that the memory width is 4 bytes.
*/

#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

typedef struct {
    long double a;
    char b;
    int c;
    short d;
} Foo;

typedef struct {
    char a;
    short b;
    int c;
    long double d;
} Foo2;

int main() {
    printf("Alignment of basic data types:\n");
    printf("alignof(char) = %d\n", _Alignof(char));
    printf("alignof(short) = %d\n", _Alignof(short));
    printf("alignof(int) = %d\n", _Alignof(int));
    printf("alignof(long) = %d\n", _Alignof(long));
    printf("alignof(long long) = %d\n", _Alignof(long long));
    printf("sizeof(long long) = %d\n", sizeof(long long));
    printf("alignof(float) = %d\n", _Alignof(float));
    printf("alignof(double) = %d\n", _Alignof(double));
    printf("sizeof(long double) = %d\n", sizeof(long double));
    printf("alignof(long double) = %d\n", _Alignof(long double));
    // printf("sizeof(bool) = %d\n", sizeof(bool));

    printf("\n");

    printf("sizeof(Foo) = %d\n", sizeof(Foo));
    printf("alignof(Foo) = %d\n", _Alignof(Foo));
    printf("offsetof(a) = %d\n", offsetof(Foo, a));
    printf("offsetof(b) = %d\n", offsetof(Foo, b));
    printf("offsetof(c) = %d\n", offsetof(Foo, c));
    printf("offsetof(d) = %d\n", offsetof(Foo, d));

    printf("\n");

    printf("sizeof(Foo2) = %d\n", sizeof(Foo2));
    printf("alignof(Foo2) = %d\n", _Alignof(Foo2));
    printf("offsetof(a) = %d\n", offsetof(Foo2, a));
    printf("offsetof(b) = %d\n", offsetof(Foo2, b));
    printf("offsetof(c) = %d\n", offsetof(Foo2, c));
    printf("offsetof(d) = %d\n", offsetof(Foo2, d));

    return 0;
}