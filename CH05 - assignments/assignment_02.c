/*
Write a C program that acts as a simple calculator,
first it will ask the user to enter the operation ID,
depending on the operation, 
the program will ask the user either to enter 1 operand or 2 operands,
and the program will execute the operation and print the result.
Each operation should be implemented in a stand alone function.
Hint : you could use switch-case to select which operation to perform
Add - Subtract - Multiply - Divide - Reminder - And - Or - Xor - Shift_left - Shift_right - Not - Increment - Decrement
*/

#include <stdio.h>
#include "operators.h"

void main(){
    int id, oper_1, oper_2;
    printf("Please, enter operation ID(1:13): ");
    scanf("%d", &id);

    // Add - Subtract - Multiply - Divide - Reminder - 
    // And - Or - Xor - Shift_left - Shift_right
    if(id>0 && id<=10){
        printf("Please, enter first number: ");
        scanf("%d", &oper_1);
        printf("Please, enter second number: ");
        scanf("%d", &oper_2);
    }
    // Not - Increment - Decrement
    else if(id>10 && id<=13){
        printf("Please, enter the number: ");
        scanf("%d", &oper_1);
    }
    // non-valid operation
    else{
        printf("Not allowed");
        return;
    }

    switch(id){
        case 1:
            printf("%d + %d = %d", oper_1, oper_2, add(oper_1, oper_2));
            break;
        case 2:
            printf("%d - %d = %d", oper_1, oper_2, subtract(oper_1, oper_2));
            break;
        case 3:
            printf("%d * %d = %d", oper_1, oper_2, multiply(oper_1, oper_2));
            break;
        case 4:
            printf("%d / %d = %d", oper_1, oper_2, divide(oper_1, oper_2));
            break;
        case 5:
            printf("%d %% %d = %d", oper_1, oper_2, reminder(oper_1, oper_2));
            break;
        case 6:
            printf("%d & %d = %d", oper_1, oper_2, and(oper_1, oper_2));
            break;
        case 7:
            printf("%d | %d = %d", oper_1, oper_2, or(oper_1, oper_2));
            break;
        case 8:
            printf("%d ^ %d = %d", oper_1, oper_2, xor(oper_1, oper_2));
            break;
        case 9:
            printf("%d << %d = %d", oper_1, oper_2, shift_left(oper_1, oper_2));
            break;
        case 10:
            printf("%d >> %d = %d", oper_1, oper_2, shift_right(oper_1, oper_2));
            break;
        case 11:
            printf("~ %d = %d", oper_1, not(oper_1));
            break;
        case 12:
            printf("%d ++ = %d", oper_1, increment(oper_1));
            break;
        case 13:
            printf("%d -- = %d", oper_1, decrement(oper_1));
            break;
    }

}

// command line
// gcc assignment_02.c operators.c -o assignment_02