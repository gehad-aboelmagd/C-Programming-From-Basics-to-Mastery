/*
Write a C program that asks the user to enter 10 values and 
save them in an array using a for loop. Then print the values 
entered by the user in reverse order using another for loop.
*/

#include <stdio.h>

void main(){
    int size = 10;
    int arr[size];
    // printf("sizeof(arr)=%d", sizeof(arr));   // 40
    for(int i=0; i<size; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", arr+i);
    }

    for(int i=size-1; i>=0; i--){
        printf("%d ", arr[i]);
    }

    printf("\n");

    for(int i=0; i<size; i++){
        printf("%d ", arr[size-1-i]);
    }
}