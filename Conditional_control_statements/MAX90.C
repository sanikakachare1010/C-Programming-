#include<stdio.h>
#include<conio.h>
int main()
{
	int Num1=0,Num2=0;
	clrscr();
	printf("Enter any two number=");
	scanf("%d%d",&Num1,&Num2);

	if(Num1>Num2)
	{
	  printf("Number %d is maximum.",Num1);
	}
	else
	{
	  printf("Number %d is maximum.",Num2);
	}
	getch();
	return 0;
}