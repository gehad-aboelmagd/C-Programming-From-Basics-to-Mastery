/*
Write a C program that asks the user to enter 10 values and save them in an 
array using a for loop. Then ask the user to enter a value to search about.
If the value existing in the 10 values, the program will print "Value found".
If the value is not exist, the program will print "Value not exist".
Use Binary Search algorithm.
*/

#include <stdio.h>
#include "sorting.h"
#include "searching.h"

void main(){
    int size = 10;
    int arr[size], item;
    for(int i=0; i<size; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", arr+i);
    }

    printf("Enter a value to search for: ");
    scanf("%d", &item);

    ascendingBubbleSort(arr, size);

    // for(int i=0; i<size; i++){
    //     printf("arr[%d] = %d\n", i, arr[i]);
    // }

    int index = binarySearch(arr, size, item);

    if(index<0){
        printf("Value not exist");
    }
    else{
        printf("value found");
    }
}