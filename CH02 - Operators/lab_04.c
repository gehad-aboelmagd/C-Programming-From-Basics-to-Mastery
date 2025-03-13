// wirte a c program to check the size of each primitive datatype

#include <stdio.h>

int main(void){

    printf("sizeof char is %d\n", sizeof(char));
    printf("sizeof int is %d\n", sizeof(int));
    printf("sizeof float is %d\n", sizeof(float));
    printf("sizeof double is %d\n", sizeof(double));
    
    /*
    sizeof char is 1
    sizeof int is 4   
    sizeof float is 4 
    sizeof double is 8
    */

    printf("\nsize of primitive datatypes with type modifiers\n\n");
    
    printf("sizeof short int is %d\n", sizeof(short int));
    printf("sizeof long int is %d\n", sizeof(long int));
    printf("sizeof long is %d\n", sizeof(long));
    printf("sizeof long long int is %d\n", sizeof(long long int));
    printf("sizeof long long is %d\n", sizeof(long long));
    printf("sizeof long double is %d", sizeof(long double));

    /*
    sizeof short int is 2
    sizeof long int is 4
    sizeof long is 4
    sizeof long long int is 8
    sizeof long long is 8
    sizeof long double is 12
    */

    return 0;
}