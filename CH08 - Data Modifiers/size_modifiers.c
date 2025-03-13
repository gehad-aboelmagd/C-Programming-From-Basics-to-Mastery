
#include <stdio.h>

int main() {

    printf("%d\n", sizeof(char));
    printf("%d %d\n", sizeof(short), sizeof(short int));
    printf("%d\n", sizeof(int));
    printf("%d %d\n", sizeof(long), sizeof(long int));
    printf("%d %d\n", sizeof(long long), sizeof(long long int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d", sizeof(long double));

    return 0;
}

/* 

############################ output on my local pc ############################
1
2 2
4
4 4
8 8
4
8
12

########################## output on online compiler ##########################

1
2 2
4
8 8
8 8
4
8
16

*/