#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iSumEven = 0, iSumOdd = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    return iSumEven - iSumOdd;;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Difference between Sum of Even and Odd Digits is : %d\n",iRet);
    return EXIT_SUCCESS;

}        