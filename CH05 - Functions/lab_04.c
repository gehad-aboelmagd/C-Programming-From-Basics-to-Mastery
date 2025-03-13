/*
Write a C program that calculates the factorial of a
number entered by the user using recursive functon.
*/

#include<stdio.h>

int factorial(int x){
    if(x<0) return -1;
    else if(x<=1) return 1;
    else return x * factorial(x-1);
}

void main(void){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int fact = factorial(num);
    if(fact<0)
        printf("Not allowed");
    else
        printf("Factorial of %d is %d", num, fact);
}