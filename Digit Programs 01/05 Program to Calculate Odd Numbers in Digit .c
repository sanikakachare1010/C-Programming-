/// Program to Calculate Odd Numbers in Digit
#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Temp = 0,O_cnt = 0;

    printf("\n Enter a Positive Numbers :");
    scanf("%d",&No);

    for(Temp = No;Temp > 0;Temp /= 10)
    {
        if((Temp%10) %2 != 0)
        {
            O_cnt++;
        }
    }
    printf("\n Count of Odd Number %d is : %d",No,O_cnt);

    getch();
    return 0;
}
