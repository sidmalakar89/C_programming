#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : NonFact
//    Description   : Accepts an integer from the user and displays all non-factors of the given number.
//
//    Input         : iNo
//
//    Output        : Input 12 -> 5 7 8 9 10 11
//                    Input 13 -> 2 3 4 5 6 7 8 9 10 11 12
//                    Input 10 -> 3 4 6 7 8 9
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-07
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCount = 0;

    iCount = 1;
    while(iCount <= iNo)
    {
        if((iNo % iCount) != 0)
        {
            printf("%d\t", iCount);
        }

        iCount++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}