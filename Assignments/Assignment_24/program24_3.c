#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////
//  
//      Function Name : FristChar
//      Input         : String, Character
//      OUTPUT        : 
//      DESCRIPTION   : Find the frist occured character inside the string  
//      Date          : 15/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////


int FristChar(char *str,char ch)
{
    int i = 0, iCount = 0;
    while(str[i] != '\0')
    { 
        if(str[i] == ch)
        {

            return iCount;
        }

        iCount++;

        i++;
    }
    return -1;
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


    iRet = FristChar(arr,cValue);

    printf("%d",iRet);


    return EXIT_SUCCESS;
}