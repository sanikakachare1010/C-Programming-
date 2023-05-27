#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	float pi=3.14;
	float area;
	clrscr();
	printf("\n enter the value of radius:");
	scanf("%d",&r);
	area= pi*r*r;
	printf("area of circle is %f",area);
	getch();
}
