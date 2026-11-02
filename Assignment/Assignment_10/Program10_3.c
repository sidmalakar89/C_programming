#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : KMToMeter
//    Description   : Accepts a distance in kilometers from the user and converts it into meters using the
//                    conversion formula 1 Kilometer = 1000 Meters.
//
//    Input         : iKM
//
//    Output        : Input 5  -> 5000
//                    Input 12 -> 12000
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int kMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance :\n");
    scanf("%d", &iValue);

    iRet = kMtoMeter(iValue);

    printf("Distance in Kilometer %d\n", iRet);

    return EXIT_SUCCESS;
}