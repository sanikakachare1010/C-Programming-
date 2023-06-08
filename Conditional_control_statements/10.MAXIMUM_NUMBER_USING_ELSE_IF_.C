#include<stdio.h>
#include<conio.h>
int main()
{
	int No1=0,No2=0;
	clrscr();

	printf("Enter any two integer numbers=");
	scanf("%d%d",&No1,&No2);

	if(No1==No2)
	{
	      printf("\n Both Numbers Given Are Equal..");
	}
	else if(No1>No2)
	{
	     printf("\n %d is Maximum.",No1);
	}
	else
	{
	     printf("\n %d is Maximum.",No2);
	}
	getch();
	printf("\n Thanks For Interacting...");

	getch();
	return 0;
}
