/*
Write a C program that asks the user to enter 10 values and save them in an array using a for loop.
Then, ask the user to enter a value to search about. If the value exists in the 10 values, 
the program will print "Value exists x times" where x defines how many times the value exists. 
If the value doesn't exist, the program will print "Value not exist". Use linear search algorithm.
*/

#include <stdio.h>
#include "searching.h"

int Repitition(int *ptr, int size, int item){
    int times = 0;

    for(int i=0; i<size; i++){
        if(ptr[i]==item){
            times ++;
        }
    }

    return times;
}

void main(){
    int arr[10], target;
    for(int i=0; i<10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", arr+i);
    }
    printf("Enter a value to search for: ");
    scanf("%d", &target);

    int times = Repitition(arr, 10, target);     // times > 0
    int index = linearSearch(arr, 10, target);   // index > -1

    if(times){
        printf("Value exists %d times\n", times);
        printf("Elements order is %d", index+1);
    }
    else{
        printf("Value not exist");
    }

}