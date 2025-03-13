// write a C program to read 10 numbers form the user and 
// find their summation and average

#include <stdio.h>

void main(){

    int i;
    int num, sum=0;
    printf("Enter the 10 Numbers\n");
    for(i=1; i<=10; i++){
        printf("Number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    printf("The sum of 10 no is: %d\n", sum);
    printf("The average is: %0.2f", sum/10.0);
}