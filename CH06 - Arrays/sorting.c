#include <stdbool.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ascendingBubbleSort(int* arr, int size){
    bool is_swapped;
    for(int i=0; i<size-1; i++){
        is_swapped=false;
        for(int j=0; j<size-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                is_swapped = true;
            }
        }

        // best case
        if(!is_swapped){
            // printf("\nbreak\n");
            break;
        }
    }
}

void descendingBubbleSort(int* arr, int size){
    bool is_swapped;
    for(int i=0; i<size-1; i++){
        is_swapped=false;
        for(int j=0; j<size-1-i; j++){
            if(arr[j]<arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                is_swapped = true;
            }
        }

        // best case
        if(!is_swapped){
            // printf("\nbreak\n");
            break;
        }
    }
}