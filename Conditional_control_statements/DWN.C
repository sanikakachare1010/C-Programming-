#include<stdio.h>
#include<conio.h>
int main()
{
	int Num1=0,Num2=0;
	clrscr();
	printf("Enter any two numbers=");
	scanf("%d%d",&Num1,&Num2);

	if(Num1==Num2)
	{
		printf("\n Both given numbers are equal");
		goto DWN;
	}
	if(Num1>Num2)
	{
		printf("\n Number %d is Maximum.",Num1);
	}
	else
	{
		printf("\n Number %d is maximum.",Num2);
	}
	DWN:
		printf("\n Thanks");
		getch();
		return 0;
}