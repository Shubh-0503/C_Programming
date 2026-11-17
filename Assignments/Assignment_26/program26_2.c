#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//  
//      Function Name : Display
//      Input         : Character
//      OUTPUT        : 
//      DESCRIPTION   : conver captial to small and small to capital  
//      Date          : 16/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("Captial: %c",ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("Small: %c",ch);
          
    }
    else
    {
        printf("Not an Alphabet");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the Character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}