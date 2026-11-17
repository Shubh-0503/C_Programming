#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//  
//      Function Name : Strwrx
//      Input         : string
//      OUTPUT        : 
//      DESCRIPTION   : string Modify  
//      Date          : 15/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//
//
//////////////////////////////////////////////////////////////


void Strwrx(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] +32;
        }
        i++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    Strwrx(arr);

    printf("Modified String is : %s ",arr);

    return EXIT_SUCCESS;
}