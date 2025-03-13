/* 
Login System: 
Write a C program that asks the user to enter his/her id and then the program will print his name.
Available IDs are:
1234 ---> Ahmed
5678 ---> Abdelrahman
1145 ---> Mina
Any other number, the program will print Wrong ID
*/

#include<stdio.h>

void main(void){
    int id;
    printf("Please, enter your ID: ");
    scanf("%d", &id);
    switch(id){
        case 1234:
            printf("Welcome, Ahmed");
            break;
        case 5678:
            printf("Welcome, Abdelrahman");
            break;
        case 1145:
            printf("Welcome, Mina");
            break;
        default:
            printf("Wrong ID!");
            break;   // preventing fall-through: try enter 12 while uncommenting the below two lines of code
        // case 12:
        // printf("12");
    }
}