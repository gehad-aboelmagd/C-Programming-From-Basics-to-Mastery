/*
Write a C program that defines 2 arrays, and send them
to a function that applies scalar multiplication btwn
the two arrays and returns the result.
The main function then will print the result.
*/

#include <stdio.h>

int applyScalraMult(int *x, int *y, int size) {
    int result = 0;
    for(int i=0; i<size; i++) {
        result += *(x + i) * *(y + i);
    }

    return result;
}

void main() {
    int arr1 [] = {1, 3, 5};
    int arr2 [] = {0, 2, 4};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    int scalar_mult;
    scalar_mult = applyScalraMult(arr1, arr2, size);
    printf("%d", scalar_mult);

}