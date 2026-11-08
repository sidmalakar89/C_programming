#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Pattern
//    Description   : Accepts the number of rows and columns from the user and displays a pattern of even and
//                    odd numbers alternately in each row.
//
//    Input         : iRow, iCol
//
//    Output        : Input iRow = 4 iCol = 5
//                    2   4   6   8   10
//                    1   3   5   7   9
//                    2   4   6   8   10
//                    1   3   5   7   9
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-08
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PatternEvenOdd(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;
    int iNo = 0;
    
    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iNo = 1;
        }
        else
        {
            iNo = 2;
        }
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            printf("%d\t", iNo);
            iNo = iNo + 2;
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

    PatternEvenOdd(iValue1, iValue2);

    return EXIT_SUCCESS;
}