// Write a program whichh accept name from user and print that name.
/*

input : Siddharth Malakar
output : Siddharth Malakar

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Name[30];
    
    printf("Please enter full name:\n");
    scanf("%[^\n]s", Name);

    printf("Your name is %s\n", Name);

    return EXIT_SUCCESS;
}
