#include <stdio.h>

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
    u8 x : 4;
    u8 y : 5;
    // u8 z : 2;
    // u16 x2 : 14;
    // u16 y2 : 10;
} Foo;


typedef struct {
    u8  x : 4;
    u16 y : 4;
    u32 z : 4;
} Foo2;

typedef struct {
    unsigned char a : 3, b : 3;
    unsigned int c : 3;
    unsigned char d : 3, e : 3;
} Foo3;

 typedef struct {
    unsigned int a : 5,
      : 3,
    b : 5,
      : 0, // forward to a new int 
    c : 5,
      : 3, 
    d : 5;

} Foo4;

union mocca {
    char x;
    short y;
    int z;
};

typedef union {
    char x;
    short y;
    int z;
} mocca2;

void main() {
    printf("%d\n", sizeof(Foo));
    printf("%d\n", sizeof(Foo2));
    printf("%d\n", sizeof(Foo3));
    printf("%d\n", sizeof(Foo4));

    printf("%d\n", sizeof(union mocca));   // 4
    printf("%d\n", sizeof(mocca2));   // 4
}