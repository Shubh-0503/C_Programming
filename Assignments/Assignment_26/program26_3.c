#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////////////
//  
//      Function Name : Display
//      Input         : Character
//      OUTPUT        : 
//      DESCRIPTION   : Display Next characters  
//      Date          : 16/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////
void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        for(; ch <= 'Z'; ch++)
        {
            printf("%c\t",ch);
        }
    
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(; ch <= 'z';ch++)
        {
             printf("%c\t",ch);   
        }
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