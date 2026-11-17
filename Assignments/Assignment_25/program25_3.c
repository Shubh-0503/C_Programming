#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////
//  
//      Function Name : ChkDigit
//      Input         : character
//      OUTPUT        : Bool
//      DESCRIPTION   : Find Given input is Digit or not  
//      Date          : 16/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////


BOOL ChkDigit(char ch)
{
    if((ch >= '0' && ch <= '9'))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("enter the character:");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not Digit");
    }


    
    return EXIT_SUCCESS;
}