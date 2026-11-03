#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
        
    }
    return FALSE;
}
int main()
{
    BOOL bRet = 0;
    int iValue = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);


    if(bRet == TRUE)
    {
        printf("it Contains Zero");
    }
    else
    {
        printf("ther is No Zero\n");
    }

    return EXIT_SUCCESS;
}