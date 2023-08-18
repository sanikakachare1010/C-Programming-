///Program to Find Count of Digit Using-For
#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0,Temp = 0,D_cnt = 0;

    printf("\n Enter Positive Numbers : ");
    scanf("%d",&No);

    for (Temp = No;Temp >0;Temp/=10)
    {
        D_cnt++;
    }

    printf("\n Digit Count in : %d",D_cnt);

    getch();
    return 0;

}

