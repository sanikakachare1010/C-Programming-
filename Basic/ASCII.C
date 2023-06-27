#include<stdio.h>
#include<conio.h>
int main()
{
	int No=0;
	printf("\n Ascii Table=>\n\n");

	for(No=0;No<128;No++)
	{
	   printf("\n %d=%c",No,No);
	}
	printf("\n Thanks");
	getch();
	return 0;
}