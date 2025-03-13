/*
Write a C program that asks the user to enter 10 values,
save them into an array, and print their maximum and minimum.
*/

#include <stdio.h>

int get_min(int* arr, int size){
    int index = 0;
    int min = arr[0];

    for(int i=1; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
            index = i;
        }
    }

    return index;
}

int get_max(int* arr, int size){
    int index = 0;
    int max = arr[0];

    for(int i=1; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
            index = i;
        }
    }

    return index;
}

void main(){
    int arr[10];
    for(int i=0; i<10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", arr+i);
    }

    int index = get_min(arr, 10);
    printf("Minimum value: arr[%d] = %d\n", index, arr[index]);
    index = get_max(arr, 10);
    printf("Maximum value: arr[%d] = %d\n", index, arr[index]);
}