#include<stdio.h>
#include<stdlib.h>

void calculateDiscount(float fAmount)
{
    float fAns = 0.0f, fFinal_Amount = 0.0f;
    if(fAmount < 0)
    {
        printf("Invalid ");
    }
    else if(fAmount < 1000)
    {
        fAns = (fAmount * 0) / 100;
        fFinal_Amount = fAmount - fAns;
        printf("Payable Amount =%f",fFinal_Amount);

    }
    else if((fAmount >= 1000) && (fAmount < 5000 ))
    {
        fAns = (fAmount * 10) / 100;
        fFinal_Amount = fAmount - fAns;
        printf("Payable Amount = %f ",fFinal_Amount);

    }
    else if(fAmount > 5000)
    {
        fAns = (fAmount * 20) / 100;
        fFinal_Amount = fAmount - fAns;
        printf("Payable Amount = %f",fFinal_Amount);

    }

}

int main()
{
    float fAmount = 0.0f;

    printf("Enter Purchase Amount :");
    scanf("%f",&fAmount);

    calculateDiscount(fAmount);

    return EXIT_SUCCESS;
}