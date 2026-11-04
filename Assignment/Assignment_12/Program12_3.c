#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CountTwo
//    Description   : Accepts an integer from the user and counts the frequency of digit 2 present in the given
//                    number. If digit 2 is not present, it returns zero.
//
//    Input         : iNo
//
//    Output        : Input 2395  -> 1
//                    Input 1018  -> 0
//                    Input 9000  -> 0
//                    Input 922432 -> 3
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-04
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iFreq = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iFreq++;
        }
        iNo = iNo / 10;
    }

    return iFreq;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);

    printf("Frequency of 2 in %d is : %d\n", iValue, iRet);

    return EXIT_SUCCESS;
}