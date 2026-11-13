#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Pattern
//    Description   : Accepts the number of rows and columns from the user and displays a rectangular pattern
//                    consisting entirely of asterisks.
//
//    Input         : iRow, iCol
//
//    Output        : Input iRow = 4 iCol = 3
//                    *   *   *
//                    *   *   *
//                    *   *   *
//                    *   *   *
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-13
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            printf("*\t");
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
