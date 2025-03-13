/*
Write a C program that implements two functions.
    1- function to get the maximum of 4 values.
    2- function to get the minimum of 4 values.
The program will ask the user first to enter the 4 values,
then print the maximum number and the minimum number of them.
*/

#include <stdio.h>

int GetMin(int* arr, int arr_size){
    int min = arr[0];
    for(int i=1; i<arr_size; i++){
        if(arr[i]<min)
            min = arr[i];
    }

    return min;
}

int GetMax(int* arr, int arr_size){
    int max = arr[0];
    for(int i=1; i<arr_size; i++){
        if(arr[i]>max)
            max = arr[i];
    }

    return max;
}

void main(){
    int arr_size = 4;
    int arr[arr_size];
    for(int i=0; i<arr_size; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", arr+i);        
    }
    printf("Minimum is %d\n", GetMin(arr, arr_size));
    printf("Maximum is %d\n", GetMax(arr, arr_size));
}