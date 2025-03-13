/*
Write a C program that defines a structure for employees
that contains their salary, bonus and deduction.

The program shall ask the user to enter these information
for three employees (Ahmed, Waleed and Amr).

Then the program will print the total value shall be
supplied by the finance team.
*/

#include <stdio.h>

typedef struct {
    double salary,
    bonus,
    deduction;
} Employee;

void main() {
    const int n = 3;
    char *names[] = {"Ahmed", "Waleed", "Amr"};

    Employee emp;
    double s, b, d;
    for(int i=0; i<n; i++) {
        printf("Please, Enter %s's salary: ", names[i]);
        scanf("%lf", &emp.salary);
        s += emp.salary;

        printf("Please, Enter %s's bonus: ", names[i]);
        scanf("%lf", &emp.bonus);
        b += emp.bonus;
        
        printf("Please, Enter %s's deduction: ", names[i]);
        scanf("%lf", &emp.deduction);
        d += emp.deduction;
    }

    printf("Totla finance = %0.2lf", s + b - d);
}