#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : FactDiff
//    Description   : Accepts an integer from the user and returns the difference between the summation of all
//                    its factors and non-factors.
//
//    Input         : iNo
//
//    Output        : Input 12 -> -34 (16 - 50)
//                    Input 10 -> -29 (8 - 37)
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-07
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCount = 0;
    int iSum = 0;
    int iFact = 1;
    int iNonFact = 1;

    iCount = 1;
    while(iCount < iNo)
    {
        if((iNo % iCount) == 0)
        {
            iFact = iFact + iCount;
        }
        else
        {
            iNonFact = iNonFact + iCount;
        }
        iCount++;
    }

    iSum = iFact - iNonFact;

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Difference between factors and Non factors is : %d\n", iRet);

    return EXIT_SUCCESS;
}