#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : FhtoCelsius
//    Description   : Accepts a temperature in Fahrenheit from the user and converts it into Celsius using the
//                    formula Celsius = (Fahrenheit - 32) * (5.0 / 9.0).
//
//    Input         : fFahrenheit
//
//    Output        : Input 10 -> -12.2222
//                    Input 34 -> 1.11111
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double FhtoCelsius(int fTemp)
{
    float fCelsius = 1;

    fCelsius = (fTemp - 32) / 1.8;

    return fCelsius;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0;

    printf("Enter Temperature in Fahrenheit :\n");
    scanf("%d", &iValue);

    fRet = FhtoCelsius(iValue);

    printf("Celsius of Fahrenheit is %f\n", fRet);

    return EXIT_SUCCESS;
}