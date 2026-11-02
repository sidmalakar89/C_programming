#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Display
//    Description   : Accepts an integer from the user and displays the specified number of asterisks (*)
//                    followed by the same number of hash symbols (#). If the number is negative, its absolute
//                    value is considered.
//
//    Input         : iNo
//
//    Output        : Input 5  -> *  *  *  *  *  #  #  #  #  #
//                    Input 6  -> *  *  *  *  *  *  #  #  #  #  #  #
//                    Input -5 -> *  *  *  *  *  #  #  #  #  #
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t", iCnt);
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t", iCnt);
    }
    
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
