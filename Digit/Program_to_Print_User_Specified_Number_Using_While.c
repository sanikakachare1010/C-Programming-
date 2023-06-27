#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 1, No = 1;

    printf("\n Enter a Number To Print Table :");
    scanf("%d",&No);


    printf("\n\n====================*****===========================\n\n");

    while(i <= 10)
    {
        printf("\n\t\t%d",i * No);
        i++;
    }


    printf("\n\n====================*****===========================\n\n");

    getch();
    return 0 ;
}
