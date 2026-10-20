#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if(iNo % 5 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{

    int iValue = 0;
    BOOL bRet =FALSE;

    printf("Enter The Number: \n");
    scanf("%d",&iValue);


    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("The Number is Divisible by 5\n");
    }
    else
    {
        printf("The Number is Not Divisible by 5\n");
    }


    return EXIT_SUCCESS;

}