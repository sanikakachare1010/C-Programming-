#include<stdio.h>
#include<conio.h>

int Add(int x,int y)
{
    int Sum = 0;

    Sum = x + y;

    return Sum;
}
int main()
{
    int N1 = 0, N2 = 0,Res = 0;

    printf("\n Enter No1 = ");
    scanf("%d",&N1);
    printf("\n  Enter N2 =");
    scanf("%d",&N2);

    Res = Add(N1,N2);

    printf("\n Addition of %d + %d is = %d" ,N1, N2, Res);

    printf("\n Thanks");

    getch();
    return 0;
}
