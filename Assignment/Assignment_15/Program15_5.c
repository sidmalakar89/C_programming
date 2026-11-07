#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Percentage
//    Description   : Accepts total marks and obtained marks from the user and calculates the percentage.
//
//    Input         : iTotalMarks, iObtainedMarks
//
//    Output        : Input 1000 745 -> 74.5%
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-07
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float Percentage (int iTotalMarks, int iObtainedMarks)
{
    float fPercentage = 0;

    fPercentage = ((float) iObtainedMarks / iTotalMarks) * 100;

    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter Total Marks :\n");
    scanf("%d", &iValue1);

    printf("Enter obtained Marks :\n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("percentage are : %f%\n", fRet);

    return EXIT_SUCCESS;
}