#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CountLess
//    Description   : Accepts an integer from the user and counts the frequency of digits that are less than 6
//                    present in the given number.
//
//    Input         : iNo
//
//    Output        : Input 2395 -> 3
//                    Input 1018 -> 3
//                    Input 9440 -> 3
//                    Input 96672 -> 1
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-04
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountLessThanSix(int iNo)
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
        if(iDigit < 6)
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

    iRet = CountLessThanSix(iValue);

    printf("Frequency of digits less than 6 is : %d\n", iRet);

    return EXIT_SUCCESS;
}