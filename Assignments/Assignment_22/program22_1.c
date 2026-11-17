#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//  
//      Function Name : Pattern
//      Input         : integer, integer
//      OUTPUT        : 
//      DESCRIPTION   : Print Pattern  
//      Date          : 15/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//
//
//////////////////////////////////////////////////////////////


void Pattern(int iNo)
{
    int i = 0;
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= iNo; i++, ch++)
    {
        printf("%c\t",ch);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}