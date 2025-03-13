/*
Write a C code that ask the user to enter two values
and save them in two variables, then the program sends
these variables to a function that calculates the
summation and subtraction of them. The function should
return two results, but that isn't possible. Instead,
it could recieve two pointers to the results containers
as additional arguments.
*/

#include <stdio.h>

void updateResults(int num1, int num2, int* p_sum, int* p_sub) {
    *p_sum = num1 + num2;
    *p_sub = num1 - num2;
}

void main() {
    int num1, num2;
    printf("Please, enter num 1: ");
    scanf("%d", &num1);

    printf("Please, enter num 2: ");
    scanf("%d", &num2);

    int sum, sub;
    updateResults(num1, num2, &sum, &sub);
    printf("The sum = %d\n", sum);
    printf("The sub = %d", sub);
}