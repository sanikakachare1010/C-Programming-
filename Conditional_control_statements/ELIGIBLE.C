#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	clrscr();
	printf("Enter your age=");
	scanf("%d",&age);
	if(age>18)
	{
		printf("Eligible for vote");
	}
	else
	{
		printf("Note Eligible for vote");
	}
	getch();
	return 0;
}