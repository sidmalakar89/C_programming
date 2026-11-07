#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : MultFact
//    Description   : Accepts an integer from the user and calculates the multiplication of all factors of
//                    the given number.
//
//    Input         : iNo
//
//    Output        : Input 12 -> 144
//                    Input 13 -> 1 (1)
//                    Input 10 -> 10 (1 * 2 * 5)
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-06
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCount = 1;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCount < iNo)
    {
        if(iNo % iCount == 0)
        {
            iFact = iFact * iCount;
        }
        iCount++;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of Factors are : %d\n", iRet);

    return EXIT_SUCCESS;
}
