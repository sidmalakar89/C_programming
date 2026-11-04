#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : RangeSumEven
//    Description   : Accepts two positive integers from the user and returns the sum of all even numbers
//                    within the given range, including the starting and ending values. If the range contains
//                    negative numbers or the starting value is greater than the ending value, it displays
//                    an invalid range message.
//
//    Input         : iStart, iEnd
//
//    Output        : Input 23 30  -> 108
//                    Input 10 18  -> 70
//                    Input -10 2  -> Invalid range
//                    Input 90 18  -> Invalid range
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-04
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    iCnt = iStart;
    while(iCnt <= iEnd)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
    }
    return iSum;
}

int main()
{
    int iValue1 =0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point :\n");
    scanf("%d", &iValue1);

    printf("Enter Ending point :\n");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iValue1 <= 0 || iValue1 > iValue2)
    {
        printf("Invalid range\n");
        return EXIT_FAILURE;
    }

    printf("Addition of even numbers is %d\n", iRet);

    return EXIT_SUCCESS;
}