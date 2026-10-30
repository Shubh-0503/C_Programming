#include<stdio.h>
#include<stdlib.h>

void checkCharacterType(int cCh)
{
    if(cCh >= 'A' && cCh <= 'Z')
    {
        printf("UpperCase Alphabet \n");
    }
    else if(cCh >= 'a' && cCh <= 'z')
    {
        printf("LowerCase Alphabet \n");
    }
    else if(cCh >= '0' && cCh <= '9')
    {
         printf("Digit \n");
     
    }
    else
    {
        printf("Special Symbol  \n");

    }

}
int main()
{
    char cValue = '\0';

    printf("Enter The Character : ");
    scanf("%c",&cValue);

    checkCharacterType(cValue);

    return EXIT_SUCCESS;

}
