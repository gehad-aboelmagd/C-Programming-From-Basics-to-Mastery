/*
Write a C program that ask the user to enter two numbers and print their summation,
this program should never ends until the user closes the window.
*/

#include<stdio.h>

int main(void){
    while(2){
        int num1, num2;
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);
        printf("The result is %d\n", num1+num2);
    }
}