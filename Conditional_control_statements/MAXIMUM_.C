#include<stdio.h>
#include<conio.h>
int main()
{
	int N1=0,N2=0;
	clrscr();

	printf("\n Enter any two integer Number =");
	scanf("%d%d",&N1,&N2);

       (N1==N2) ? printf("\n N1 & N2 Equal") :(N1>N2) ? printf("\n %d is Max.",N1) :printf("\n %d is Max.", N2);

       printf("\n Thanks");
       getch();
       return 0;
}