#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;


//////////////////////////////////////////////////////////////
//  
//      Function Name : ChkVowel
//      Input         : String
//      OUTPUT        : 
//      DESCRIPTION   : Find the inside string Vowel or not
//      Date          : 17/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////

BOOL ChkVowel(char *str)
{ 
    int i = 0;
    while(str[i] != '\0')
    {
        if((str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || 
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'))
            {
                 return TRUE;
            }
            i++;

    }
    return FALSE;

}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("enter the String:");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf(" There is no Contains Vowel");
    }


    
    return EXIT_SUCCESS;
}