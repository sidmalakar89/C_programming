#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : RangeDisplayEven
//    Description   : Accepts two integers from the user and displays all even numbers within the given range,
//                    including the starting and ending values. If the starting value is greater than the
//                    ending value, it displays an invalid range message.
//
//    Input         : iStart, iEnd
//
//    Output        : Input 23 35   -> 24 26 28 30 32 34
//                    Input 10 18   -> 10 12 14 16 18
//                    Input 10 10   -> 10
//                    Input -10 2   -> -10 -8 -6 -4 -2 0 2
//                    Input 90 18  -> Invalid Range
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-04
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point:\n");
    scanf("%d", &iValue1);

    printf("Enter ending point:\n");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}