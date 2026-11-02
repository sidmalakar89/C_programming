#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : DisplayTableRev
//    Description   : Accepts an integer from the user and displays its multiplication table in reverse order,
//                    starting from the 10th multiple down to the 1st multiple. If the number is negative,
//                    its absolute value is considered.
//
//    Input         : iNo
//
//    Output        : Input 2  -> 20  18  16  14  12  10  8  6  4  2
//                    Input 5  -> 50  45  40  35  30  25  20  15  10  5
//                    Input -5 -> 50  45  40  35  30  25  20  15  10  5
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayTableRev(int iNo)
{
    int iMulti = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    DisplayTableRev(iValue);

    return EXIT_SUCCESS;
}