#include <stdio.h>

void main(){
    char name[] = "Gehad";
    name[0] = 'g';
    
    printf("%s\n", name);    // gehad
    
    printf("%d\n", sizeof(name));   // 6 : [ 'g', 'e', 'h', 'a', 'd', '\0' ]
    
    for(int i=0; i<sizeof(name); i++){
        printf("%c, %d\n", name[i], name[i]);
    }

    /*
    g, 103
    e, 101
    h, 104
    a, 97
    d, 100
    , 0
    */

    
    char name2 []= "gehad";
    printf("%s\n", name);
    printf("%d", name==name2);
}