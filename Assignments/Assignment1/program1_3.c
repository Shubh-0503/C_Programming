#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int iNo = 0;
        iNo = 5;

    while(iNo > 0)
    {
        printf("%d\n",iNo);
        iNo--;
    }
}
int main()
{
    Display();

    return EXIT_SUCCESS;

}