/*
Write a C program to check the type of a "sign representation technique"
used by your compiler. 
*/

#include <stdio.h>

void main() {
    unsigned int var = -1;
    printf("%u\n", var);   
    // 255 which is 1111 1111
    // this is 2's complement representation

    for(int i=0; i<sizeof(int)*8; i++) {
        int temp = 0x80000000 & var;
        if(temp) printf("1");
        else printf("0");
        var <<= 1;
    }
}