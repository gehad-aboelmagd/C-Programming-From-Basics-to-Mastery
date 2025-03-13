/*
Write a C code to manage a class of 10 students.
Each student studies 4 subjects: Math, Language,
Physics and Chemistry.

First define an array of 10 students and assign
random grades for them.

The system will ask the user to enter the student
ID, then shows their grades.

The software shall manage wrong IDs.
*/

#include <stdio.h>
#include <stdlib.h>

const int n = 4;
const char* subjects[] = {
    "Math", "Lnaguage", "Physics", "Chemistry"
};

typedef struct Student {
    int id;
    int grades[4];
} Student;

void main() {
    const int size = 10;
    Student stud[size];
    for(int i=0; i<size; i++) {
        stud[i].id = rand()%21;
        for(int j=0; j<n; j++) {
            stud[i].grades[j] = rand()%101;
        }
    }

    int id;
    printf("Please, enter student id: ");
    scanf("%d", &id);

    for(int i=0; i<size; i++) {
        if(stud[i].id == id) {
            for(int j=0; j<n; j++) {
                printf("%s grade: %d\n", subjects[j], stud[i].grades[j]);
            }
            return;
        }
    }

    printf("Invalid ID");
}