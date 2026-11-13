#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Pattern
//    Description   : Accepts the number of rows and columns from the user and displays a pattern of asterisks
//                    along the boundary and both diagonals of the matrix.
//
//    Input         : iRow, iCol
//
//    Output        : Input iRow = 6 iCol = 6
//                    *   *   *   *   *   *
//                    *   *               *
//                    *       *           *
//                    *           *       *
//                    *               *   *
//                    *   *   *   *   *   *
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
            if(jCnt == iCnt)
            {
                printf("*\t");
            }
            else if((iCnt > 1) && (iCnt < iRow) && (jCnt > 1) && (jCnt < iCol))
            {
                printf(" \t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n\n");
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