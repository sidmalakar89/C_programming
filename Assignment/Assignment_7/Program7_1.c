#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Pattern
//    Description   : Accepts an integer from the user and displays the dollar ($) and asterisk (*) symbols
//                    alternately for the specified number of times. If the input is negative, its absolute
//                    value is considered.
//
//    Input         : iNo
//
//    Output        : Input 5  -> $ * $ * $ * $ * $ *
//                    Input 3  -> $ * $ * $ *
//                    Input -3 -> $ * $ * $ *
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("$\t*\t", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
