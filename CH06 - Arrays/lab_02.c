/*
Write a C program that asks the user to enter 10 values 
and save them in an array using a for loop. Then print
the summation and average of the values entered.
*/

#include <stdio.h>

void main(){
    int arr[10];
    int sum = 0, average;
    for(int i=0; i<10; i++){
        printf("Please, enter number %d: ", i+1);
        scanf("%d", arr+i);
        sum += arr[i];
    }
    
    printf("Sum of array elements = %d\n", sum);
    printf("Average of array elements = %0.2f", sum/10.0);
}