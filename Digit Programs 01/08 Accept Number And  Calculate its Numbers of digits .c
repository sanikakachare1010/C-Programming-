/// Accpet Numbers and Calculate Number of Digits
#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0 ,Temp =0,Cnt = 0;

    printf("\n Enter the number :");
    scanf("%d",&No);

    Temp = No;

    for ( Temp = No ;Temp > 0;Temp /=10)
    {
        Cnt++;
    }
    printf("\n Digit Count in %d = %d",No,Cnt);
    getch();
    return 0;
}
