// write a C program that asks the user to enter 10 numbers
// then, asks him to enter another number to search on it in 
// the 10 numbers and print its location in case its found
// in case number is not found, it will print no exist

#include<stdio.h>

void main(void){

    int arr[10], num;

    for(int i=0; i<10; i++){
        printf("Enter number %d: ",i+1);
        scanf("%d", arr+i);
    }

    printf("Enter number to search for: ");
    scanf("%d", &num);

    int flag=0;
    // complexity: O(N)
    for(int i=0; i<10; i++){
        if (arr[i]==num){
            printf("Value exists in element number %d", i+1);
        }
        else{
            flag++;
        }
    }

    if(flag==10){
        printf("Value doesn't exist in element number");
    }
    
    
}