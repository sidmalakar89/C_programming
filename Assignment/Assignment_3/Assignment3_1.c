#include <stdio.h>
#include <stdlib.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    // Logic

    int iCnt = 0;           // It is a counter of loop
    int iCount =0;          // It is used to count how many numbers are print 

    iCnt = 1;              
    while(iCnt >= 1)          // here means if counter is greater than 1 
    {
        if(iCnt % 2 == 0)      
        {
            printf("%d\t",iCnt);
            iCount++;
        }
        iCnt++;
        if(iCount == iNo)
        {
            printf("\n");
            return;
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}
