#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////////////
//  
//      Function Name : CountSmall
//      Input         : String
//      OUTPUT        : 
//      DESCRIPTION   : Count Small Alphabates inside the string  
//      Date          : 17/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////
int CountCapital(char *str)
{
    int iCnt = 0;
    char i = '\0';
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            iCnt++;
        }
        i++;

    }
    return iCnt;

}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);
    
    iRet = CountSmall(arr);

    printf("Small characters :%d",iRet);
    
    return EXIT_SUCCESS;
}