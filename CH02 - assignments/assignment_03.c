// write a c program that takes two numbers and
// print their summation, subtraction, anding, 
// oring and xoring

#include <stdio.h>

int main(void){

    int a, b;
    printf("Please, enter number a: ");
    scanf("%d", &a);
    printf("Please, enter number b: ");
    scanf("%d", &b);

    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a & b = %d\n", a&b);
    printf("a | b = %d\n", a|b);
    printf("a ^ b = %d\n", a^b);

    return 0;
}