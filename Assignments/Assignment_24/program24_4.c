#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////
//  
//      Function Name : LastChar
//      Input         : String, Character
//      OUTPUT        : 
//      DESCRIPTION   : find last character inside the string  
//      Date          : 15/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////


int LastChar(char *str,char ch)
{
    int i = 0, iLast = -1;
    while(str[i] != '\0')
    { 
        if(str[i] == ch)
        {
             iLast = i;
        }
        i++;
    }
    return iLast;
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


    iRet = LastChar(arr,cValue);

    printf("Character location is: %d",iRet);


    return EXIT_SUCCESS;
}