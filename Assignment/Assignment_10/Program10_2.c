#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : RectArea
//    Description   : Accepts the width and height of a rectangle from the user and calculates its area using
//                    the formula Area = Width * Height.
//
//    Input         : fWidth, fHeight
//
//    Output        : Input 5.3, 9.78 -> 51.834
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width of Rectangle :\n");
    scanf("%f", &fValue1);

    printf("Enter Height of Rectangle :\n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is %lf\n", dRet);

    return EXIT_SUCCESS;
}