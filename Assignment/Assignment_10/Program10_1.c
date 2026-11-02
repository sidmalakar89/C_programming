#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CircleArea
//    Description   : Accepts the radius of a circle from the user and calculates its area using the formula
//                    Area = PI * Radius * Radius, considering the value of PI as 3.14.
//
//    Input         : fRadius
//
//    Output        : Input 5.3  -> 88.2026
//                    Input 10.4 -> 339.6224
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet  = 0.0;

    printf("Enter radius :\n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %lf\n", dRet);

    return EXIT_SUCCESS;
}
