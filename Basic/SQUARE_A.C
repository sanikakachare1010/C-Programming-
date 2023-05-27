#include<stdio.h>
#include<conio.h>
int main()
{
	int num,s,c;
	clrscr();
	printf("\nEnter any number:");
	scanf("%d",&num);
	s=num*num;
	printf("\nSquare of no:%d",s);
	c=num*num*num;
	printf("\nCube of no:%d",c);
	getch();
}
