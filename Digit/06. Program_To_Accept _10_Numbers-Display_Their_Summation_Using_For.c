#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int  No = 0 ,Sum = 0 ,Cnt = 0 , Num = 0;

    printf("\n How many number you have =");
    scanf("%d",&Num);

    for(Cnt = 1; Cnt <= Num; Cnt++)
    {

           printf("\n\n Enter Number %d =",Cnt);
           scanf("%d",&No);

        Sum= Sum + No;
    }
    printf("\n Summation of given numbers = %d", Sum);

    getch();
    return 0;
}
