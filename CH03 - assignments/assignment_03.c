// write a C program that ask the user to enter 3 numbers
// the program will print the maximum number of them

// // without using loops
// #include<stdio.h>

// void main(void){
//     int num1, num2, num3;
//     printf("Enter number 1: ");
//     scanf("%d", &num1);
//     printf("Enter number 2: ");
//     scanf("%d", &num2);
//     printf("Enter number 3: ");
//     scanf("%d", &num3);

//     if(num1>num2){
//         if(num1>num3){
//             printf("Maximum number is: %d", num1);
//         }
//         else{
//             printf("Maximum number is %d", num3);
//         }
//     }
//     else{
//         if(num2>num3){
//             printf("Maximum number is %d", num2);
//         }
//         else{
//             printf("Maximum number is %d", num3);
//         }
//     }
// }


// using loops
#include<stdio.h>

void main(void){
    int num, max;
    printf("Enter number 1: ");
    scanf("%d", &max);
    for(int i=2; i<=3; i++){
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if(num>max){
            max = num;
        }
    }
    printf("Maximum number is %d", max);
}