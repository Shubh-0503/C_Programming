#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////
//  
//      Function Name : ChkChar
//      Input         : String
//      OUTPUT        : 
//      DESCRIPTION   : find character   
//      Date          : 15/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////


BOOL ChkChar(char *str,char ch)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return TRUE;
        }
        i++;
    }
    return FALSE;
}

int main()
{
    char cValue= '\0';
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    printf("Enter Character: ");
    scanf(" %c",&cValue);


    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character NOt Found");       
    }


    return EXIT_SUCCESS;
}