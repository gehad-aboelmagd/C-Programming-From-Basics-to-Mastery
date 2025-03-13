// #include <stdio.h>

// // prototype or declaration
// int add(int a, int b);

// // a complete definition
// // no need to a declaration
// int subtract(int x, int y){
//     return x-y;
// }

// void main(){
//     printf("%d\n", add(1,2));
//     printf("%d", subtract(1,3));
// }

// // definition
// int add(int a, int b){
//     return a+b;
// }


/*
Write a C program that asks the user to enter two numbers,
then, the main function will call a function named Get Max
that takes two vlaues entered entered by the user then,
return the maximum of them.
*/

#include <stdio.h>

int GetMax(int a, int b);

void main(){
    int x, y;
    printf("Please, enter value 1: ");
    scanf("%d", &x);
    printf("Please, enter value 2: ");
    scanf("%d", &y);
    printf("The maximum value is %d", GetMax(x, y));
}

int GetMax(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}