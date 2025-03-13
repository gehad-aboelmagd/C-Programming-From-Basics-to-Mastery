// // garbage value

// #include <stdio.h>

// // uninitialized global variable
// int var;

// void main(void){
//     // uninitialized local variable
//     int y;
//     int x = y;
//     printf("%d", y);    // 4194432
//     printf("\n");
//     printf("%d", x);   // 4194432
//     printf("\n");

//     printf("%d", var);   // 0
//     printf("\n");

//     // array index out of range 
//     int arr1[2] = {3, 5};
//     printf("array out of index: %d", arr1[2]);
//     printf("\n");
    
//     int arr2 [5];
//     for (int i=0; i<5; i++){
//         printf("%d", arr2[i]);
//     printf("\n");
//     }

//     /*
//     -2
//     6422280
//     1997238061
//     4200960
//     6422352
//     */

//     float float_var = 54.12;
//     double double_var = 54.12;
//     printf("float var using %%f is %f\n", float_var);
//     printf("double var using %%f is %f\n", double_var);
//     printf("float var using %%lf is %lf\n", float_var);
//     printf("double var using %%lf is %lf\n", double_var);
// }



/*
    problem statement:
    wirte a c program that asks the user to enter a value then print it.
*/

#include <stdio.h>

void main (void) {
    int value;
    printf("Please, enter the value: ");
    scanf("%d", &value);
    printf("The value you entered is %d\n", value);
    printf("%d", sizeof(void));
}

// Don't forget to implement a c equivalent of python's input() function