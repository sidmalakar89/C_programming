#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : DisplayTable
//    Description   : Accepts an integer from the user and displays its multiplication table up to 10 multiples.
//                    If the number is negative, its absolute value is considered.
//
//    Input         : iNo
//
//    Output        : Input 2  -> 2  4  6  8  10  12  14  16  18  20
//                    Input 5  -> 5  10  15  20  25  30  35  40  45  50
//                    Input -5 -> 5  10  15  20  25  30  35  40  45  50
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayTable(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt ++)
    {
        iMulti = iNo * iCnt;
        printf("%d\t", iMulti);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    DisplayTable(iValue);

    return EXIT_SUCCESS;
}