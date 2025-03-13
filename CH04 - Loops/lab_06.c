/*
wirte a C program that calculate the factorial of a number
entered by the user using while loop.
*/

#include<stdio.h>

void main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // applicable for num=0 ---> factorial=1
    int i=2, factorial=1;
    while(i<=num){
        factorial *= i;
        i++;
    }

    printf("Factorial: %d", factorial);
}