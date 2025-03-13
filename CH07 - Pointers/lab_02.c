/*
Write a C code that ask the user to enter two values
and save them in two variables, then the program sends
these variables by address to a function that returns
the summation of them. The program then prints the result.
*/

#include <stdio.h>

int getSum(int* pNum1, int* pNum2) {
    return (*pNum1) + (*pNum2);
}

void main() {
    int num1, num2;
    printf("Please, enter num 1: ");
    scanf("%d", &num1);

    printf("Please, enter num 2: ");
    scanf("%d", &num2);

    int sum = getSum(&num1, &num2);
    printf("The result = %d", sum);
}