#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////////////
//  
//      Function Name : CountSmall
//      Input         : String
//      OUTPUT        : int
//      DESCRIPTION   : Count Small  and Capitals Alphabates inside the string  
//      Date          : 17/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCapCnt = 0, iSmallCnt = 0;
    char i = '\0';
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            iCapCnt++;
        }
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            iSmallCnt++;
        }
        i++;

    }
    return iSmallCnt - iCapCnt;

}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);
    
    iRet = CountCapital(arr);

    printf("Capital characters :%d",iRet);
    
    return EXIT_SUCCESS;
}