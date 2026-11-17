#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//  
//      Function Name : DisplayDigits
//      Input         : String
//      OUTPUT        : 
//      DESCRIPTION   : only display Digits inside the String  
//      Date          : 15/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////

void DisplayDigits(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c",str[i]);
        }
        i++;
    }


}
int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    DisplayDigits(arr);


    return EXIT_SUCCESS;
}