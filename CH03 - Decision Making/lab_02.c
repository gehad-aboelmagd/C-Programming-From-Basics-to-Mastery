// write a C program that asks the user to enter a number
// and check if it is even or odd number by 2 different
// methods.

#include<stdio.h>

void main (){
    int num;
    printf("Please, enter a number: ");
    scanf("%d", &num);

    // method 1
    if(num%2 == 0)
        printf("Number is even");
    else
        printf("Number is odd");

    // // method 2
    // if (num%2 == 1)
    //     printf("Number is odd");
    // else
    //     printf("Number is even");

}