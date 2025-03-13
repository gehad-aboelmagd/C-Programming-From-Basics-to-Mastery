/*
Write a C program that manage a small school. 
The school has 3 classes each contain 10 students.
Define three arrays for the three classes each one with a length of 10.
Save random numbers in all array elements to indicate the students grades.
The program will calculate and display the following satatics:
    1- number of passed students
    2- number of failed students
    3- highest grade
    4- lowest grade
    5- average grade
knowing that that the total grade is from 100 and the minimum passing grade is 50.
*/

#include <stdio.h>

int passed(int* grades, int size, int margin){
    int count = 0;
    for(int i=0; i<size; i++){
        if(grades[i]>=margin){
            count ++;
        }
    }
    return count;
}

int max_grade(int* grades, int size){
    int max = grades[0];
    for(int i=1; i<size; i++){
        if(grades[i]>max){
            max = grades[i];
        }
    }
    return max;
}

int min_grade(int* grades, int size){
    int min = grades[0];
    for(int i=1; i<size; i++){
        if(grades[i]<min){
            min = grades[i];
        }
    }
    return min;
}

int average_grade(int* grades, int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += grades[i];
    }
    return sum/size;
}

void main(){
    int classes[][10] = {
        {100, 99, 46, 58, 43, 67, 89, 88, 72, 80},
        {0, 13, 100, 86, 54, 77, 99, 90, 69, 83},
        {100, 22, 50, 66, 86, 76, 32, 90, 99, 93}
    };

    int total_pass = 0;
    int max [3];
    int min [3];
    int average[3];
    int margin = 50;

    for(int i=0; i<3; i++){
        total_pass += passed(classes[i], 10, margin);
        max[i] = max_grade(classes[i], 10);
        min[i] = min_grade(classes[i], 10);
        average[i] = average_grade(classes[i], 10);
    }

    printf("Number of passed students is %d\n", total_pass);
    printf("Number of failed students is %d\n", 30 - total_pass);
    printf("Highest grade is %d\n", max_grade(max, 3));
    printf("Lowest grade is %d\n", min_grade(min, 3));
    printf("Average grade is %d\n", average_grade(average, 3));
}