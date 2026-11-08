#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Pattern
//    Description   : Accepts the number of rows and columns from the user and displays a pattern of lowercase
//                    alphabets and numbers alternately in each row.
//
//    Input         : iRow, iCol
//
//    Output        : Input iRow = 5 iCol = 5
//                    a   b   c   d   e
//                    1   2   3   4   5
//                    a   b   c   d   e
//                    1   2   3   4   5
//                    a   b   c   d   e
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-08
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PatternChar(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;
    int iNo = 0;
    char ch = '\0';

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            ch = 'a';
        }

        else
        {
            iNo = 1;
        }

        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if(iCnt % 2 != 0)
            {
                printf("%c\t", ch);
                ch++;
            }

            else
            {
                printf("%d\t", iNo);
                iNo++;
            }
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

    PatternChar(iValue1, iValue2);

    return EXIT_SUCCESS;
}