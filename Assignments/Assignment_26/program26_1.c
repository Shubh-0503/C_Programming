#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//  
//      Function Name : DisplayASCII
//      Input         : 
//      OUTPUT        : 
//      DESCRIPTION   : Display ASCII table   
//      Date          : 16/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int i = 0;
    printf("Decimal\t | Octal\t | Hexadecimal\n ");
    printf("-----------------------------------------\n");
    for(i = 0; i <= 255; i++)
    {
        printf("%d\t\t%o\t\t%X\n",i,i,i);
    }
}
int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}