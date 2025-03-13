#include <stdio.h>

void main() {
    /* ################# trying to edit constant variables ################# */
    const float PI = 3.14;
    printf("%f\n", PI);
    // PI = 3.14*2;
    // compilation error: assignement of read-only variable

    /* ############### pointer to variable-with-type-modifier ############### */
    unsigned char x = -5;
    
    char *pX = &x;
    printf("%d %d\n", x, *pX);   // 251 -5

    unsigned char *pX2 = &x;
    printf("%d %d\n", x, *pX2);   // 251 251

    /* ######################### pointer to constant ######################### */
    const int y = 2;
    
    int *pY = &y;   
    // warning: initialization discards 'const' qualifier from pointer target type : int *pY = &y; 
    *pY = 100;
    printf("%d %d\n", y, *pY);   // 100 100

    const int *pY2 = &y;
    // *pY2 = 100;
    // error: assignment of read-only location
    printf("%d %d\n", y, *pY2);   // still: 100 100

    char non_constant = 5;
    const char *ptr_to_constant = &non_constant;
    // no porblem to declare a pointer-to-constant and assign it the address of non-constant value


    // *ptr_to_constant = 100;
    // error: assignment of read-only location '*ptr_to_constant'
    // here compiler only checking type of ptr_to_constant not what it is pointg to "non_constant"

    non_constant = 60;
    printf("%d %d\n", non_constant, *ptr_to_constant);   // 60 60
    // howerver, there is no problem to update the non-constant value through its original identifier

    /* ########################## constant pointer ########################## */
    char z = 2;
    char a = 4;

    char const *pZ = &z;
    // *pZ = 100;
    // error: assignment of read-only location '*pZ': *pZ = 100;
    // here, compiler considers whatever pZ points to is of type const.
    printf("%d %d\n", z, *pZ);   // 2 2

    pZ = &a;
    // here, compiler doesn't mind to overwrite value of pZ 
    printf("%d %d\n", a, *pZ);   // 4 4

    // conclusion: 
    // pZ is a pointer-to-constant not constant-pointer.

    z = 2;
    a = 4;
    
    char *const pZ2 = &z;
    *pZ2 = 50;
    printf("%d %d\n", z, *pZ2);   // 50 50

    // pZ2 = &a;
    // error: assignment of read-only variable 'pZ2'
    // here pZ2 is a constant variable, which means we can't
    // change the value it hods; or the address it points to

    /* #################### constant pointer-to-constant #################### */
    const char constant1 = 5;
    const char constant2 = 100;

    const char *const ptr = &constant1;
    // *ptr = 20;
    // error: assignment of read-only location '*ptr'

    // ptr = &constant2;
    // assignment of read-only variable 'ptr'
}