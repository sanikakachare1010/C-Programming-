#include<stdio.h>
#include<conio.h>
void main()
{
	int P,T,R,SI;
	clrscr();
	printf("Enter the Principle:");
	scanf("%d",&P);
	printf("Enter the Time:");
	scanf("%d",&T);
	printf("Enter the Rate:");
	scanf("%d",&R);
	SI=P*T*R/100;
	printf("Simple interest is:%d",SI);
	getch();
}

