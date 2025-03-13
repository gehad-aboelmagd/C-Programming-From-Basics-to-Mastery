
int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b){
    return a / b;
}

int reminder(int a, int b){
    return a % b;
}

int increment(int a){
    // return a++;   // returned value is a which is incorrect
    return ++a;
}

int decrement(int a){
    // return a--;   // returned value is a which is incorrect
    return --a;
}

int and(int a, int b){
    return a & b;
}

int or(int a, int b){
    return a | b;
}

int xor(int a, int b){
    return a ^ b;
}

int not(int a){
    return ~a;
}

int shift_left(int a, int b){
    return a << b;
}

int shift_right(int a, int b){
    return a >> b;
}

