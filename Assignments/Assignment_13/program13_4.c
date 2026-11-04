#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iMulti =1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMulti = iMulti * iDigit;
        iNo = iNo / 10;

    }
    return iMulti;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of Digits is : %d\n",iRet);
    return EXIT_SUCCESS;

}