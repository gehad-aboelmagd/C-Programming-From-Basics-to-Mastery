// #include <stdio.h>

// void program_1(){
//     int arr[10] = {12};
//     printf("array initialzation: int arr[10] = {12};\n");
//     for(int i=0; i<10; i++){
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }
// }

// void func(int arr[2]){
//     printf("arr[2] = %d\n", arr[2]);
//     printf("assigning arr[0] = 99\n");
//     arr[0]= 99;
// }

// void program_2(){
//     int arr [] = {1, 2, 300};
//     printf("int arr [] = {1, 2, 300};\n");
//     printf("arr[3] = %d\n", arr[3]);
//     printf("calling func()\n");
//     func(arr);
//     printf("returning form func()\n");
//     printf("arr[0] = %d", arr[0]);
// }

// int main() {
//     int topic;
//     printf("Select a program from 1 to 3: ");
//     scanf("%d", &topic);
    
//     switch(topic){
//         case 1 :
//             program_1();
//             break;

//         case 2 :
//             program_2();
//             break;
//     }

    
//     return 0;
// }

#include <stdio.h>

// void print_arr(char arr[3], int size){
//     printf("%d", sizeof(arr));
//     for(int i=0; i<size; i++){
//         printf("%d\n", arr[i]);
//     }
// }

void main(){
    // literal array
    // print_arr((char []) {'A', 'B', 'C'}, 3);
    
    // // array name is a pointer to its zeroth element
    // int arr[] = {1, 3, 5};
    // int *ptr = arr;
    // printf("%d\n", ptr[2]);

    // // 2D array
    // int matrix [][3] = {{1, 2, 3}, {4, 5, 6}};
    // printf("%d\n", sizeof(matrix));

    // for(int i=0; i<2; i++){
    //     int *temp = matrix[i];
    //     printf("%d ", temp[0]);
    // }

    // printf("\n%d", *(matrix + 1*3*4 + 2*4));

    int arr[3];
    printf("%d", (void*)&arr==(void*)arr);
}