#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CheckLeapYear
//    Description   : Accepts a year from the user and determines whether it is a leap year according to the
//                    Gregorian calendar rules.
//
//    Input         : iYear
//
//    Output        : Input 2024 -> Leap Year
//                    Input 1900 -> Not a Leap Year
//                    Input 2000 -> Leap Year
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CheckLeapYear(int iYear)
{
    if (iYear <= 0)
    {
        printf("Invalid year\n");
    }
    else if(iYear % 400 == 0)
    {
        printf("It is a leap year\n");
    }
    else if(iYear % 100 == 0)
    {
        printf("It is not a leap year\n");
    }
    else if(iYear % 4 == 0)
    {
        printf("It is a leap year\n");
    }
    else
    {
        printf("It is not leap year\n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year :\n");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}