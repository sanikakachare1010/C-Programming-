///Bitwise And implementation
#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, Res = 0;

    printf("\n Enter 1st Number :");
    scanf("%d",&No1);

    printf("\n Enter 2nd Number :");
    scanf("%d",&No2);

    Res = No1 & No2;

    printf("\n Result of => %d & %d :%d",No1,No2,Res);

    getch();
    return 0;
}
