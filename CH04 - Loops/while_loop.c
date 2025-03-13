#include<stdio.h>

// implementing a while loop
void whileLoopImplementation();

// using constructed while-loop 
void whileConsturction();

// using do while constructor
void do_while();

void main(){
    int num;
    printf("Enter number 1 for whileLoopImplementation\n");
    printf("Enter number 2 for whileConsturction\n");
    printf("Enter number 3 for do-while\n");
    scanf("%d", &num);
    switch(num){
        case 1: 
            whileLoopImplementation();
            break;
        case 2:
            whileConsturction();
            break;
        case 3:
            do_while();
            break;
    }
}

void whileLoopImplementation(){
    int x=0;
    lbl:
    if(x!=10){
        printf("Guess a number: ");
        scanf("%d", &x);
        goto lbl;
    }
}

void whileConsturction(){
    int x;
    while(x!=10){
        scanf("%d", &x);
    }
}

void do_while(){
    int roomKey=12, enterKey;
    do{
        printf("Enter a room key ");
        scanf("%d", &enterKey);
    }while(enterKey!=roomKey);

    printf("Now, you could clean the room.");

}