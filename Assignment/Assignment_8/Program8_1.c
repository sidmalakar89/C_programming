#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CheckNumber
//    Description   : Accepts an integer from the user and classifies it as Small, Medium, or Large based on its
//                    value. If the number is less than 50, it is Small; if it is greater than 50 and less than
//                    100, it is Medium; if it is greater than 100, it is Large.
//
//    Input         : iNo
//
//    Output        : Input 75  -> Medium
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckNumber(int iNo)
{
    if(iNo < 50)
    {
        printf("Small number");
    }
    else if(iNo >= 50 && iNo < 100)
    {
        printf("Medium Number");
    }
    else
    {
        printf("Large Number");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
