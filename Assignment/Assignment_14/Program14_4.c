#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : SumNonFact
//    Description   : Accepts an integer from the user and returns the summation of all non-factors of the given
//                    number.
//
//    Input         : iNo
//
//    Output        : Input 12 -> 50
//                    Input 10 -> 37
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-07
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCount = 0;
    int iSum = 0;

    iCount = 1;
    while(iCount <= iNo)
    {
        if((iNo % iCount)!= 0)
        {
            iSum = iSum + iCount;
        }
        iCount++;
    }

    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);
    
    iRet = SumNonFact(iValue);

    printf("Summation of Non Factors is : %d\n", iRet);

    return EXIT_SUCCESS;
}