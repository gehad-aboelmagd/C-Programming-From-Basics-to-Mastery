
#include <stdio.h>

void PrintMyName(char* heading)
{
    printf("%s", heading);
    char* name;
    scanf("%s", name);
    printf("Welcome, %s!", name);
}