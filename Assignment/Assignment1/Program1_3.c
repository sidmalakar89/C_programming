#include <stdio.h>
#include <stdlib.h>

void Display()
{
    int iNo = 0;

    int iCnt = 5;
    while(iCnt >= 1)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }
}
int main()
{
    Display ();

    return EXIT_SUCCESS;
}
