#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////
//  
//      Function Name : Strtogglex
//      Input         : String, character
//      OUTPUT        : 
//      DESCRIPTION   : Find the character inside the string  
//      Date          : 15/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////


int ChkChar(char *str,char ch)
{
    int i = 0, iCount = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iCount++;
        }
        i++;
    }
    return iCount;
}

int main()
{
    char cValue= '\0';
    char arr[20];
    int iRet = 0;
    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    printf("Enter Character: ");
    scanf(" %c",&cValue);


    iRet = ChkChar(arr,cValue);

    printf("%d",iRet);


    return EXIT_SUCCESS;
}