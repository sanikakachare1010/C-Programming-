/// Program  To Calculate Sum Of Digit Using - for
#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0,Temp = 0,D_sum =0;

    printf("\n Enter Positive Number :");
    scanf("%d",&No);

    for(Temp = No; Temp>0; Temp/=10)
    {
        D_sum += (Temp%10);

    }

    printf("\n Digit Sum of : %d",D_sum);

    getch();
    return 0;
}

