#include<stdio.h>
#include<stdlib.h>

void claculateBonus(float fSalary, int iYear )
{
    float fFinal_Amount = 0.0f;
    if((fSalary < 0) || (iYear < 0))
    {
        printf("Invalid Details\n");
    }
     else if(iYear > 10 )
    {
        fFinal_Amount = ((fSalary * 15) / 100);
        
        printf("Payable Amount =%f",fFinal_Amount);

    }
    else if((iYear > 5 ) &&(iYear < 10))
    {
        fFinal_Amount = (fSalary * 10 / 100);
        printf("Payable Amount =%f",fFinal_Amount);

    }
    else if(iYear < 5 )
    {
        fFinal_Amount = (fSalary * 5 / 100);
        printf("Payable Amount =%f",fFinal_Amount);

    }
    else
    {
        printf("Invalid input ");
    }
}

int main()
{
    float fSalary = 0.0f;

    int iYear = 0;


    printf("Enter Salary and Year of Servicr : ");
    scanf("%f %d",&fSalary, &iYear);

    claculateBonus(fSalary,iYear);

    return EXIT_SUCCESS;
}