#include<stdio.h>
#include<conio.h>
int main()
{
	int Num1=0 , Num2=0;
	clrscr();
	printf("Enter any two numbers=");
	scanf("%d%d",&Num1,&Num2);

	if(Num1==Num2)
	{
		printf("Both Numbers are equal");
	}
	else if(Num1<Num2)
	{
		printf("\n Number %d is Minimum.",Num1);
	}
	else
	{
		printf("\n Number %d is Minimum.",Num2);
	}
	getch();
	return 0;
}