#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CountDiff
//    Description   : Accepts an integer from the user and calculates the difference between the sum of even
//                    digits and the sum of odd digits present in the given number. If the number is negative,
//                    its absolute value is considered.
//
//    Input         : iNo
//
//    Output        : Input 2395 -> -15 (2 - 17)
//                    Input 1018 -> 6 (8 - 2)
//                    Input 8440 -> 16 (16 - 0)
//                    Input 5733 -> -18 (0 - 18)
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-04
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    int iEven = 0;
    int iOdd = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iEven = iEven + iDigit;
            iCount++;
        }
        else
        {
            iOdd = iOdd + iDigit;
            iCount++;
        }
        iNo = iNo / 10;
    }

    iDiff = iEven - iOdd;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Difference between summation of even digit and odd digit is : %d\n", iRet);

    return EXIT_SUCCESS;
}