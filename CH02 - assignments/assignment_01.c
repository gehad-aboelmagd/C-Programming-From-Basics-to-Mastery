
/*
wirte a c program to print this pyramid using printf

       *
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * *
* * * * * * * *

*/ 

#include <stdio.h>

int main(void){
    
    int n = 0;   // no. of pyramid rows
    printf("Enter number of rows: ");
    scanf ("%d", &n);

    int max = 2*n-1;   // max row length "stars + spaces"
    int blank = 0, writing = 0;

    for (int i=1; i<=n; i++){
        writing = 2*i-1;
        blank = (max - writing)/2;

        for(int j=0; j<blank; j++)
        printf(" ");

        for(int j=0; j<(writing-1)/2; j++)
        printf("* ");

        printf("*\n");
    }

    return 0;
}