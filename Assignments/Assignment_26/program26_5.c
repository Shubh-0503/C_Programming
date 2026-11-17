#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////////////
//  
//      Function Name : Display
//      Input         : Character
//      OUTPUT        : 
//      DESCRIPTION   : conver Decimal, Octal, Hexadecimal
//      Date          : 16/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////
void Display(char ch)
{
    printf("Decimal \t%d\n",ch);
    printf("Octal \t%o\n",ch);
    printf("Hexadecimal \t%x\n",ch);

    
       
}
int main()
{
    char cValue = '\0';

    printf("Enter the Character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}