// functions declaration

int add(int x, int y);
int subtract(int x, int y);



// trying to include both declaration and definition in the same file
// doesn't raise any compilation errors

// int add(int a, int b){
//     return a + b ;
// }

// int subtract(int a, int b){
//     return a - b ;
// }

/*
but why to separate?
another persuasive reason other than being following separation of concerns, is 
encapsulation: which means exposing an interface for what the functions should do in a .h file
and hiding the actual implementation from the programmer in another .c file
*/