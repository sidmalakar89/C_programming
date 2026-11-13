#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Pattern
//    Description   : Accepts the number of rows and columns from the user and displays a rectangular pattern
//                    of numbers, where each row contains the same number in increasing order.
//
//    Input         : iRow, iCol
//
//    Output        : Input iRow = 4 iCol = 4
//                    1   1   1   1
//                    2   2   2   2
//                    3   3   3   3
//                    4   4   4   4
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-13
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;
    int iNo = 0;

    for(iCnt = 1, iNo = 1; iCnt <= iRow; iCnt++, iNo++)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            printf("%d\t", iNo);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows :\n");
    scanf("%d", &iValue1);

    printf("Enter number of columns :\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}