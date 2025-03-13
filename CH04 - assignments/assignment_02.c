/*
Write a login program in C that asks the user to enter his ID & password.
If the ID is correct, the system will ask the user to enter his passowrd up to 3 times.
If he enters the password right, the system welcomes him.
If the 3 times are incorrect, the system print "No more tires".
If the user ID is incorrect, the system prints "You are not registered".
*/

/*
sample data
user   ID    password
Ahmed  1234  7788
Amr    5678  5566
Wael   9870  1122
*/

#include<stdio.h>
void main(){
    int n = 3;   // number of users
    char* users[] = {"Ahmed", "Amr", "Wael"};
    int ids[] = {1234, 5678, 9870};
    int pswrds[] = {7788, 5566, 1122};
    int id, pswrd;

    // checking for id existence
    printf("Enter your ID: ");
    scanf("%d", &id);
    int i;
    for(i=0; i<n; i++){
        if(id==ids[i])
        break; 
    }

    if(i<3){
        // checking for password
        int j;
        for(j=0; j<3; j++){
            printf("Enter your password: ");
            scanf("%d", &pswrd);
            if(pswrd==pswrds[i]){
                printf("Welcome, %s", users[i]);
                break;
            }
            else{
                printf("Wrong password!\n");
            }
        }
        if(j==3){
            printf("No more tires");
        }
    }
    else{
        printf("You are not registered");
    }
}