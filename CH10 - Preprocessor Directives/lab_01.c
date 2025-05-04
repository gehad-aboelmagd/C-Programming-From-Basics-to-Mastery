/*

Write a C program to print your name.

Generate the following files:
1. the intermediate file
2. the assemble file
3. the object file
4. the executable file

Answer:
1. gcc -E lab_01.c -o lab_01.i
2. gcc -S lab_01.c -o lab_01.asm
3. gcc -c lab_01.c -o lab_01.o
4. gcc lab_01.c -o lab_01.exe 

*/

#include <stdio.h>

void main() {
    printf("Hello, Gehad!");
}