/*
Write a C program to implement a function to
swap two global vairables
*/

#include<stdio.h>

int x, y;
void swap(void);

void main (void){
    // printf("%d %d", x, y);
    // global vairables are implicitly initialized to 0
    printf("X before swap: ");
    scanf("%d", &x);
    printf("Y before swap: ");
    scanf("%d", &y);

    swap();

    printf("X After swap: %d\n", x);
    printf("Y After swap: %d\n", y);
}

void swap(void){
    int temp = x;
    x = y;
    y = temp;
}