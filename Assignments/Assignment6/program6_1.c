#include<stdio.h>
#include<stdlib.h>

void calculateElectricityBill(int iUnite)
{
    float fBill = 0.0f;

    if(iUnite <= 100)
    {
        fBill = iUnite * 5;
        printf("Bill : ",fBill);
    }
    else if((iUnite >= 100) && (iUnite <=200))
    {
        fBill = iUnite * 7;
        printf("Bill : ",fBill);
    }
    else if(iUnite > 200)
    {
        fBill = iUnite * 10;
        printf("Bill : ",fBill);
    }
}

int main()
{
    int iUnite =0;

    printf("Enter consumer units");
    scanf("%d",&iUnite);

    calculateElectricityBill(iUnite);
    return EXIT_SUCCESS;

}