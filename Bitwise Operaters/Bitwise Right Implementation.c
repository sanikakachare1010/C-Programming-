/// Bitwise Right Implimentation
#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Res = 0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    printf("\n\n=======================********==============================\n\n");

    Res = No >> 2;
    printf("\n Result => %d >> 2 %d",No,Res);

    printf("\n\n======================*******================================\n\n");

    getch();
    return 0;

}
