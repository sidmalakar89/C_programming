#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CountRange
//    Description   : Accepts an integer from the user and counts the frequency of digits that are greater than
//                    3 and less than 7 (4, 5, 6) present in the given number.
//
//    Input         : iNo
//
//    Output        : Input 2395 -> 1
//                    Input 1018 -> 0
//                    Input 4521 -> 2
//                    Input 9922 -> 0
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-04
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("Count of digit in between 3 and 7 is : %d\n", iRet);

    return EXIT_SUCCESS;
}