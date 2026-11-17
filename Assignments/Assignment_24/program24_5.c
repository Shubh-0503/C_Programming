#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////
//  
//      Function Name : StrRevX
//      Input         : String
//      OUTPUT        : 
//      DESCRIPTION   : String Reveres  
//      Date          : 15/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////


void StrRevX(char *str)
{
    int i = 0, j = 0;
    char temp = '\0';
    while(str[j] != '\0')
    { 
        j++;
    }

    j--;

    while(i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;

    }

}

int main()
{
    char arr[20];
    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Reverse String : %s",arr);


    return EXIT_SUCCESS;
}