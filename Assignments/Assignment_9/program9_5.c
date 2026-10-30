#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iEven = 1, iOdd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEven = iEven * iCnt;


        } 
        else
        {
            iOdd = iOdd * iCnt;
        }


    }
    return iEven - iOdd;

}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Factoria Difference is %d",iRet);


    return EXIT_SUCCESS;

}