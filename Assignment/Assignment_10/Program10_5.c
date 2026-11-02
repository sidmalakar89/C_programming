#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : SquareMeter
//    Description   : Accepts an area in square feet from the user and converts it into square meters using the
//                    conversion formula 1 Square Foot = 0.092903 Square Meters.
//
//    Input         : fArea
//
//    Output        : Input 5 -> 0.464515
//                    Input 7 -> 0.650321
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iNo)
{
    double dAns = 0.0;

    dAns = (iNo * 0.0929);

    return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in Square feet :\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("%d square feet is %f in square meter \n", iValue, dRet);

    return EXIT_SUCCESS;
}