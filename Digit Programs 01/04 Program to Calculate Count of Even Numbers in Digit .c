/// Program to Calculate Count of Even Numbers in Digit
#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0,Temp = 0,E_cnt = 0;

    printf("\n Enter Positive Number :");
    scanf("%d",&No);

    for(Temp = No;Temp > 0;Temp /= 10)
    {
        if((Temp%10) %2 == 0)
        {
            E_cnt++;
        }
    }
    printf("\n Count of Even Numbers %d is :%d",No,E_cnt);

    getch();
    return 0;
}
