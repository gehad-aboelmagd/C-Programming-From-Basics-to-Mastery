/*
write a C program to display the multiplication table of a given integer.
*/

#include<stdio.h>

void main(){
    int num;
    printf("Enter the number to display its multiplication table: ");
    scanf("%d", &num);

    int i=1;
    
    // using while
    while(i<=10){
        printf("%d * %d = %d\n", num, i, num*i);
        i++;
    }

    // using do-while
    i=1;
    do{
        printf("%d * %d = %d\n", num, i, num*i);
        i++;
    }
    while(i<=10);
}