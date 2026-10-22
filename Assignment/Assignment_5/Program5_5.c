#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : IdentifyCharacterType
//    Description   : Accepts a single character from the user and identifies whether it is an uppercase
//                    alphabet, lowercase alphabet, digit, or special character.
//
//    Input         : cNo
//
//    Output        : Input 'A' -> Uppercase Alphabet
//                    Input 'm' -> Lowercase Alphabet
//                    Input '7' -> Digit
//                    Input '@' -> Special Character
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CheckCharacterType(char cNo)
{
    if(cNo >= 'A' && cNo <= 'Z')
    {
        printf("It is Uppercase Alphabet \n");
    }
    else if(cNo >= 'a' && cNo <= 'z')
    {
        printf("It is lowecase Alphabet \n");
    }
    else if(cNo == '!' || cNo == '@' || cNo == '#' || cNo == '$' || cNo == '%' || cNo == '^' || cNo == '&' || cNo == '*')
    {
        printf("It is Special Character \n");
    }
    else if(cNo >= 1 || cNo <= 1)
    {
        printf("It is Digit number \n");
    }
    else
    {
        printf("Please Enter Valid Input \n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character :\n");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}