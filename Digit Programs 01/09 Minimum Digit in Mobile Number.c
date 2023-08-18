#include<stdio.h>
#include<conio.h>
int main()
{
    long long int No = 0,Temp = 0;
    int Min = 0,Dig =0;

    printf("\n Enter Your Mobile Number :");
    scanf("%lld",&No);

    Temp = No;

    Min = Temp % 10;

    while(Temp > 0)
    {
        Dig = Temp %10;

        if(Dig < Min)
        {
            Min = Dig;
        }
        Temp = Temp / 10;
    }
    printf("\n Minimum number  is :%d",Min);

    getch();
    return 0;
}
