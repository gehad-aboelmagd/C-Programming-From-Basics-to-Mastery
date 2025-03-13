/*
Write a C program that draw a pyramid of 
stars with height entered by the user.
*/

#include<stdio.h>

void main(){
    int height;
    printf("Please, enter the height of the pyramid: ");
    scanf("%d", &height);
    // iterating over rows 
    for(int i=0; i<height; i++){
        // white distance
        for(int j=0; j<height-1-i; j++){
            printf(" ");
        }
        // stars
        for(int j=0; j<i+1; j++){
            printf("* ");
        }
        // new line
        printf("\n");
    }
}