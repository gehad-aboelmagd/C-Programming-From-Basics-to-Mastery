// write a c program that scans 3 numbers from the user
// and print them in a reversed order.

#include <stdio.h>

int main(void){
    
    int n1, n2, n3;
    printf("Please, enter the 3 numbers: ");
    scanf ("%d %d %d", &n1, &n2, &n3);
    printf("number 3: %d\n", n3);
    printf("number 2: %d\n", n2);
    printf("number 1: %d\n", n1);

    // a more optimized solution could be
    int n=0;
    printf("Please, enter number of numbers: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter a number: ");
        scanf("%d", arr+i);
        }

    for(int i=0; i<n; i++)
    printf("number %d: %d\n", i+1, arr[n-1-i]);

    return 0;
}