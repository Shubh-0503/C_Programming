#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//  
//      Function Name : CountWhite
//      Input         : String
//      OUTPUT        : 
//      DESCRIPTION   : between the String  display White Spaces
//      Date          : 15/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int i = 0, iCount = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            iCount++;
        }
        i++;
    }
    return iCount;


}
int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}