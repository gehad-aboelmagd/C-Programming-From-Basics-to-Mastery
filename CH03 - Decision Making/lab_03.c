/* 
write a C program to ask the user to enter his grade and the program will print his rating
    grade < 50        ---> Failed
    50 <= grade < 65  ---> Normal
    65 <= grade < 75  ---> Good
    75 <= grade < 85  ---> Very Good
    85 <= grade       ---> Excellent
*/

#include <stdio.h>

void main(void){
    int grade;
    printf("Please, enter your grade: ");
    scanf("%d", &grade);

    if (grade>=85){
        printf("Your rating is Excellent");
    }
    else if (grade>=75){
        printf("Your rating is Very Good");
    }
    else if (grade>=65){
        printf("Your rating is Good");
    }
    else if (grade>=50){
        printf("Your rating is Normal");
    }
    else{
        printf("Your rating is Failed");
    }
}


// // a more precise solution 
// #include <stdio.h>

// void main(void){
//     int grade;
//     printf("Please, enter your grade: ");
//     scanf("%d", &grade);
//     char * ratings[] = {"Excellent", "Very Good", "Good", "Normal", "Failed"};

//     if (grade>=85){
//         printf("Your rating is %s", ratings[0]);
//     }
//     else if (grade>=75){
//         printf("Your rating is %s", ratings[1]);
//     }
//     else if (grade>=65){
//         printf("Your rating is %s", ratings[2]);
//     }
//     else if (grade>=50){
//         printf("Your rating is %s", ratings[3]);
//     }
//     else{
//         printf("Your rating is %s", ratings[4]);
//     }
// }