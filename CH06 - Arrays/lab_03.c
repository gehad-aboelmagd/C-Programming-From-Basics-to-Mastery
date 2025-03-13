/*
Write a C program that asks the user to enter 10 values
and save them in an array using a for loop.
The code then apply the bubble sorting algorithm and
then prints the values after sorting.
*/

#include <stdio.h>
#include "sorting.h"

void main(){
    int x[10];
    for(int i=0; i<10; i++){
        printf("Enter number %d: ",i+1);
        scanf("%d", x+i);
    }

    ascendingBubbleSort(x, 10);

    for(int i=0; i<10; i++){
        printf("%d ", x[i]);
    }

    printf("\n");

    descendingBubbleSort(x, 10);

    for(int i=0; i<10; i++){
        printf("%d ", x[i]);
    }
}