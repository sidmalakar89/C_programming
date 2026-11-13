#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Pattern
//    Description   : Accepts an integer from the user and displays uppercase alphabets from A up to the
//                    corresponding number of characters.
//
//    Input         : iNo
//
//    Output        : Input 5 -> A B C D E
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-13
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t", ch);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
