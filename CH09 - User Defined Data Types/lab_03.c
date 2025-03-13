/*
Repeat lab 1 using the typedef keyword
when declaring the structure.
*/

#include <stdio.h>

typedef struct {
    int salary;
    int bonus;
    int deduction;
} Employee;

void main() {
    const char* names[] = {
        "Ahmed", "Waleed", "Amr"
    };

    Employee emp;
    long long total = 0;
    for(int i=0; i<3; i++) {
        printf("Enter %s's salary: ", names[i]);
        scanf("%d", &emp.salary);
        printf("Enter %s's bonus: ", names[i]);
        scanf("%d", &emp.bonus);
        printf("Enter %s's deduction: ", names[i]);
        scanf("%d", &emp.deduction);

        total += emp.salary + emp.bonus - emp.deduction;
    }

    printf("total finance is %d", total);
}