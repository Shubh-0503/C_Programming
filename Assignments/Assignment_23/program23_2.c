#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////
//  
//      Function Name : Struperx
//      Input         : String
//      OUTPUT        : 
//      DESCRIPTION   : String modified  
//      Date          : 15/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////


void Struprx(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

}
int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    Struprx(arr);

    printf("Modified String is : %s ",arr);

    return EXIT_SUCCESS;
}