
#include<stdio.h>

// implementing for loop
void forLoopImpelementation();

// optional loop parts
void optionalLoopParts();

// lab_01 solution
void lab_01();

// enhanced solution
void modified_lab_01();

void main(void){
    
    int n;
    printf("Enter 1 for forLoopImplementation\n");
    printf("Enter 2 for optionalLoopParts\n");
    printf("Enter 3 for lab_01\n");
    printf("Enter 4 for modified lab_01\n");
    scanf("%d", &n);
    switch(n){
        case 1:
            forLoopImpelementation();
            break;
        case 2:
            optionalLoopParts();
            break;
        case 3:
            lab_01();
            break;
        case 4:
            modified_lab_01();
    }

}

void forLoopImpelementation(){
    int items[] = {10, 49, 38};

    // loop initialization
    int i=0;
    lbl:
    // condition checking
    if(i<sizeof(items)/4){
        printf("item %d: %d\n", i+1, items[i]);
        // Action or step
        i++;
        goto lbl;
    }
}

void optionalLoopParts(){
    int i=0;
    for( ; i<5; i++){
        printf("%d\n", i+1);
    }

    printf("*******************\n");

    for(int j=0; ; j++){
        if(j==5) break;
        printf("%d\n", j+1);
    }

    printf("*******************\n");

    for(int j=0; j<5; ){
        printf("%d\n", j+1);
        j++;
    }

}

// write a C code that will print your name ten times 
void lab_01(){
    // increased source code siz --> bigger size of text/code segment --> not practical when huge number of iteration is needed
    // no comparison included for (n+1)-times, no action/update is done for n-times ---> faster program execution 
    printf("My name is Gehad\n");
    printf("My name is Gehad\n");
    printf("My name is Gehad\n");
    printf("My name is Gehad\n");
    printf("My name is Gehad\n");
    printf("My name is Gehad\n");
    printf("My name is Gehad\n");
    printf("My name is Gehad\n");
    printf("My name is Gehad\n");
    printf("My name is Gehad\n");
}

void modified_lab_01(){
    int i;
    // any start is allowable as long as we don't need the counter inside loop
    for(i=2; i<12; i++){
        printf("My name is Gehad\n");
    }
}