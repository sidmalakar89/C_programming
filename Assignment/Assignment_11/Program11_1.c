#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : RangeDisplay
//    Description   : Accepts two integers from the user and displays all numbers between the given range,
//                    including the starting and ending values. If the starting value is greater than the
//                    ending value, it displays an invalid range message.
//
//    Input         : iStart, iEnd
//
//    Output        : Input 23 35   -> 23 24 25 26 27 28 29 30 31 32 33 34 35
//                    Input 10 18   -> 10 11 12 13 14 15 16 17 18
//                    Input 10 10   -> 10
//                    Input -10 2   -> -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2
//                    Input 90 18  -> Invalid range
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-04
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point:\n");
    scanf("%d", &iValue1);

    printf("Enter Ending point:\n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}
