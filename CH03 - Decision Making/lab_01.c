// write a C program to calculate employee salary in a week based on his working hours: hour rate = 50
// if the working hours is less than 40, a 10% deduction will be applied
// the program will ask the user to enter the working hours, then it will print the salray

#include<stdio.h>

int main(void){

    int working_hours, hour_rate = 50;
    float salary;

    printf("Please, enter your working hours: ");
    scanf("%d", &working_hours);
    salary = working_hours * hour_rate;

    // testing for deduction deservation
    if(working_hours<40)
        salary *= 0.9;

    printf("Your salary: %0.2f", salary);

    return 0;
}



// // implementing the same logic using if-else
// #include<stdio.h>

// int main(void){

//     int working_hours, hour_rate = 50;
//     float salary;

//     printf("Please, enter your working hours: ");
//     scanf("%d", &working_hours);

//     // testing for deduction deservation
//     if(working_hours<40)
//         salary = working_hours * 50 * 0.9;
//     else
//         salary = working_hours * 50;

//     printf("Your salary: %0.2f", salary);

//     return 0;
// }