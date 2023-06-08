#include<stdio.h>
#include<conio.h>
int main()
{
	char ch ='\0';
	clrscr();
	printf("\n Enter character to view corresponding message=");
	ch=getche();

	if(ch=='A'|| ch=='a')
	{
	   printf("\n WELCOME");
	}
	else if(ch=='B' || ch=='b')
	{
	   printf("\n GOOD  BYE");
	}
	else if(ch=='C' || ch=='c')
	{
	   printf("\n HAVE A NICE DAY");
	}
	else if(ch=='D'|| ch=='d')
	{
	   printf("\n GOOD DAY");
	}
	else
	{
	   printf("\n No Message For Such Character.....");
	}

	printf("\n THANKS.....");
	getch();
	return 0;
}
