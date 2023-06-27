#include<stdio.h>
#include<conio.h>
int main()
{
	int R=0,C=0;
	clrscr();

	printf("\n Tables In Range 12 To 20 =>");
	printf("\n=============******============\n\n");

	for(R=1;R<=10;R++)
	{
	    for(C=12;C<=20;C++)
	    {
	       printf("%-4d",R*C);
	    }
	    printf("\n");
	}
	printf("\n===============******==========\n");

	getch();
	return 0;
}

