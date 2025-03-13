/*
write a C program that ask the user to enter his ID.
If the ID is valid, it will ask the user for enter his password.
If the password is correct, the program will print the user name.

In case of not existing ID, the program will print 'Incorrect ID'.
If the password is incorrect, the program will print 'Incorrect Password'.
*/

#include<stdio.h>

void main(void){
    int id, pass;
    printf("Enter your ID: ");
    scanf("%d", &id);
    
    /* 
    assuming virtual ID-Passwrod-Name Triples
    1234 ---> 4321 ---> Ahmed
    5678 ---> 8765 ---> Ebrahim
    8910 ---> 0198 ---> Moahmmed
    */
    
    

    int ids[] = {1234, 5678, 8910};
    int passwrds[] = {4321, 8765, 198};
    char* names[] = {"Ahmed", "Ebrahim", "Mohammed"};
    
    int flag=0;
    for(int i=0; i<3; i++){
        if(id==ids[i]){
            flag=i;
            break;
        }
        else{
            flag++;
        }
    }

    if(flag==3){
        printf("Incorrect ID");
    }
    else{
        printf("Enter your passowrd: ");
        scanf("%d", &pass);
        
        if(pass!=passwrds[flag]){
            printf("Incorrect password");
        }
        else{
            printf("Welcome, %s", names[flag]);
        }
    }

}