#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : DisplayDigits
//    Description   : Accepts an integer from the user and displays its digits in reverse order, one digit per
//                    line. If the number is negative, its absolute value is considered.
//
//    Input         : iNo
//
//    Output        : Input 2395  -> 5
//                                  9
//                                  3
//                                  2
//
//                    Input 1018  -> 8
//                                  1
//                                  0
//                                  1
//
//                    Input -1018 -> 8
//                                  1
//                                  0
//                                  1
//
//                    Input 9000  -> 0
//                                  0
//                                  0
//                                  9
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-04
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}
