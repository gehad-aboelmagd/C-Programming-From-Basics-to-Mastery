/*
Write a C program that contains two functions; PrintMyNmae and main.
PrintMyName is defined in file2.c and its role is to print your name.
main is defined in file1.c and its role is to call PrintMyName function.
*/

/*
function prototype is necessary during compilation phase
otherwise, it will raise this error:
implicit declaration of function 'PrintMyName' 
*/
void PrintMyName(char* heading);


void main(){
    PrintMyName("Enter Your name: ");
}

/*
how to run multiple-files program using command line:
--> gcc file_1.c file_2.c ...... file_n.c -o output_name
*/