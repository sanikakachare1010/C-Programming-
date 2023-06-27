#include<stdio.h>
#include<conio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,sum;
	float per;
	clrscr();
	printf("Enter the Marks of 5 subject:");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	per=(sub1+sub2+sub3+sub4+sub5)/5;
	printf("Percentage of student%f",per);
	getch();
}