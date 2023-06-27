#include<stdio.h>
#include<conio.h>
int main()
{
    int Cnt = 0;
    float Bill = 0,Bill_Sum = 0;

    for (Cnt = 1 ; Cnt <= 10 ; Cnt++)
    {
        printf("\n Enter Bill no %d =" ,Cnt);
        scanf("%f",&Bill);

        Bill_Sum = Bill_Sum + Bill ;

    }

    printf("\n Summation of given Bill = %f",Bill_Sum);

    getch();
    return 0;
}
