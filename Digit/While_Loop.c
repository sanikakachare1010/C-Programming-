#include<stdio.h>
#include<conio.h>
int main()
{
    int Cnt = 1;
    float Bill = 0 , Bill_sum = 0 ;

    while( Cnt <= 10)
    {
        printf("\n Enter Bill No %d =" ,Cnt);
        scanf("%f",&Bill);
        Cnt++;

        Bill_sum = Bill_sum + Bill;

    }
    printf("\n Summation of given Bill is : %f " ,Bill_sum);

    getch();
    return 0 ;

}

