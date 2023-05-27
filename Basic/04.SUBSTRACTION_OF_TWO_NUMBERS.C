#include<stdio.h>
#include<conio.h>
void main()
{
	int Num1=0,Num2=0,Sub=0;
	clrscr();
	printf("Enter two numbers");
	scanf("%d%d",&Num1,&Num2);
	Sub=Num1-Num2;
	printf("Substraction of two numbers is %d",Sub);
	getch();
}
