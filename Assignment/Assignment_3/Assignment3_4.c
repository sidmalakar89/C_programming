#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name : To convert case of the character
//    Description :  accept one character fromm user and convert case of that character 
//    Input :   cValue
//    Output :  eg 
//              Input : a        output : A
//              Input : D        output : d
//    Author :  Siddharth Santosh Malakar
//    Date :  22/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n", cValue + 32);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n", cValue - 32);
    }
    else
    {
        printf("Invalid input\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}
