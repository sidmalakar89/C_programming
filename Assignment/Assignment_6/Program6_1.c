#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CalculateElectricityBill
//    Description   : Accepts the number of electricity units consumed and calculates the total bill amount
//                    according to the applicable slab-wise electricity rates.
//
//    Input         : iUnit
//
//    Output        : Input 80   -> Electricity Bill = 400.00
//                    Input 150  -> Electricity Bill = 850.00
//                    Input 250  -> Electricity Bill = 1850.00
//                    Input -230 -> Invalid Input: Negative Consumption
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CalculateElectricityBill(int iUnit)
{
    float fBill = 0.0f;

    if(iUnit < 0)
    {
        printf("Negative unit consumption is invalid\n");
    }
    else if(iUnit <= 100)
    {
        fBill = iUnit * 5;
        printf("Bill is %f units \n", fBill);
    }
    else if(iUnit >= 100 && iUnit < 200)
    {
        fBill = iUnit * 7;
        printf("Bill is %f units \n", fBill);
    }
    else if(iUnit >= 200)
    {
        fBill = iUnit * 10;
        printf("Bill is %f Units\n", fBill);
    }
    else
    {
        printf("Enter valid unit\n");
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter Consumed Units :\n");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
