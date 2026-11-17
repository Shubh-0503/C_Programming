#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;


//////////////////////////////////////////////////////////////
//  
//      Function Name : ChkSpecial
//      Input         : Character
//      OUTPUT        : 
//      DESCRIPTION   : Check special Symbol or not  
//      Date          : 16/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    if((ch == '!' || ch == '@' || ch == '#' ||
         ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*'))
         {
            return TRUE;
         }
        return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("enter the character:");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special");
    }
    else
    {
        printf("It is not Special");
    }


    
    return EXIT_SUCCESS;
}