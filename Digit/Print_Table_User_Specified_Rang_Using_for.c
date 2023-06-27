#include<stdio.h>
#include<conio.h>
int main()
{
    int  i = 0 , No = 0 ;

    printf("\n Enter a number to print table = \n");
    scanf("%d",&No);
    printf("\n=============*****===============\n");

    for(i=1 ; i <= 10 ; i++)
    {
        printf("\n\t\t%d",i*No);

    }
     printf("\n=============*****===============\n");

     getch();
     return 0;

}
