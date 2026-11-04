#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : RangeDisplayRev
//    Description   : Accepts two integers from the user and displays all numbers within the given range in
//                    reverse order, starting from the ending value down to the starting value. If the starting
//                    value is greater than the ending value, it displays an invalid range message.
//
//    Input         : iStart, iEnd
//
//    Output        : Input 23 35  -> 35 34 33 32 31 30 29 28 27 26 25 24 23
//                    Input 10 18  -> 18 17 16 15 14 13 12 11 10
//                    Input 10 10  -> 10
//                    Input -10 2  -> 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
//                    Input 90 18  -> Invalid range
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-04
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter Starting point:\n");
    scanf("%d", &iValue1);

    printf("Enter Ending point:\n");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}