/*
problem:
wirte a C program that calculates the summation of an array using
a pointer on its first element.
*/

/*
Hint:
1. Name of the array is the address of the first element in it. i.e. 
int arr[10];   // arr is the same as &arr[0]

2. All elements of the array are saved sequentially in the memory.
i.e. if you have a pointer to the first element in the array, 
incrementing the pointer makes it point to the seconde element. 
*/

#include <stdio.h>

int get_sum(int *arr, int size) {
    int sum = 0;
    for(int i=0; i<size; i++) {
        sum += *(arr + i);
    }

    return sum;
}

int main () {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    for(int i=0; i<size; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", arr+i);
    }

    printf("sum = %d", get_sum(arr, size));

    return 0;
}