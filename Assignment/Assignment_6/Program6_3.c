#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CalculateShoppingDiscount
//    Description   : Accepts the total purchase amount and calculates the final payable amount after applying
//                    the applicable discount rate.
//
//    Input         : fAmount
//
//    Output        : Input 800  -> Payable Amount = 800.00
//                    Input 2000 -> Payable Amount = 1800.00
//                    Input 6000 -> Payable Amount = 4800.00
//
//    Discount Criteria :
//                    Below 1000          -> 0% discount
//                    1000 to below 5000  -> 10% discount
//                    5000 and above      -> 20% discount
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CalculateDiscount(float FAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(FAmount < 0)
    {
        printf("Negative Amounts are invalid\n");
    }
    else if(FAmount <= 1000)
    {
        printf("Payable Amount is %f\n", FAmount);
    }
    else if((FAmount > 1000) && (FAmount < 5000))
    {
        fDiscount = FAmount * 10 / 100;
        fFinalAmount = FAmount - fDiscount;
        printf("Payable Amount is %f\n", fFinalAmount);
    }
    else if(FAmount > 5000)
    {
        fDiscount = FAmount * 20 / 100;
        fFinalAmount = FAmount - fDiscount;
        printf("Payable Amount is %f\n", fFinalAmount);
    }
    else
    {
        printf("Enter Valid Amount\n");
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount:\n");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}