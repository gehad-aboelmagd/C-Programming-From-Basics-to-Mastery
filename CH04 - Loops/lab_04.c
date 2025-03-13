/************************************************************************************
write a C code that ask the user to enter the result of 3*4.
In case the user enters correct answer, the program will print thanks.
otherwise, the program will print try again until the user enters the correct answer.
*************************************************************************************/

#include<stdio.h>

void main(){
    int ans;
    printf("Enter the answer of 3*4: ");
    scanf("%d", &ans);

    while(ans!=12){
        printf("Not correct, Try again: ");
        scanf("%d", &ans);
    }

    printf("Thank you");
}