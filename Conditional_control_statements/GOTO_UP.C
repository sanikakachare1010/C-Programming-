#include<stdio.h>
#include<conio.h>
int main()
{
	int Num1=0,Num2=0;
	clrscr();
	Up:
	    printf("Enter any two numbers=");
	    scanf("%d%d",&Num1,&Num2);

	if(Num1==Num2)
	{
	   printf("\n Both numbers are equal,\n please Enter different numbers to be compare,\n");
	   getch();
	   clrscr();
	   goto Up;
	}
	if(Num1>Num2)
	{
	   printf("\n Number %d is Maximum.",Num1);
	}
	else
	{
	   printf("\n Number %d is Maximum.",Num2);
	}
	printf("\n Thanks");
	getch();
	return 0;
}