#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : DollarToINR
//    Description   : Accepts an amount in US dollars and returns its equivalent value in Indian rupees,
//                    considering the fixed conversion rate of 1 US dollar = 70 Indian rupees.
//
//    Input         : iNo
//
//    Output        : Input 70   -> 4900
//                    Input 3    -> 210
//                    Input 1200 -> 84000
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iMulti = 0;

    iMulti = iNo * 70;

    return iMulti;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD :\n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return EXIT_SUCCESS;
}