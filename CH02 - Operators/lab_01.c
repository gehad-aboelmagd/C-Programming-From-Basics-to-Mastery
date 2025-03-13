#include <stdio.h>

int main(void){
    int a, b;
    printf("Please, enter the first number: ");
    scanf("%d", &a);
    printf("Please, enter the second number: ");
    scanf("%d", &b);
    printf("A + B = %d\n", a+b);
    printf("A * B = %d\n", a*b);
    
    return 0;
}