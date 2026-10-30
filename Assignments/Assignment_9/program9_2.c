#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iCnt = 0, iDoller = 0;

    iDoller = iNo * 70;
    return iDoller;
   
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number of USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);
    return EXIT_SUCCESS;

}