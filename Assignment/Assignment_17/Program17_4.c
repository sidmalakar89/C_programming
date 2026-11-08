#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Pattern
//    Description   : Accepts the number of rows and columns from the user and displays a pattern of positive
//                    and negative numbers alternately in each row.
//
//    Input         : iRow, iCol
//
//    Output        : Input iRow = 5 iCol = 5
//                    1    2    3    4    5
//                    -1  -2   -3   -4   -5
//                    1    2    3    4    5
//                    -1  -2   -3   -4   -5
//                    1    2    3    4    5
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-08
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;
    int iNo = 1;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iNo = 1;
        }
        else
        {
            iNo = -1;
        }

        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if(iCnt % 2 != 0)
            {
                printf("%d\t", iNo);
                iNo++;
            }
            else
            {
                printf("%d\t", iNo);
                iNo--;
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