#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////////////
//  
//      Function Name : Reverse
//      Input         : String
//      OUTPUT        : 
//      DESCRIPTION   : create a reverse string
//      Date          : 17/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////

void Reverese(char *str)
{
    int i = 0, j = 0;
    char temp = '\0';

    while(str[j] != '\0')
    {
        j++;
    }
    j--;

    while(i < j)
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
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);
    

    Reverese(arr);

    printf("REverse String is :%s",arr);

    
    return EXIT_SUCCESS;
}