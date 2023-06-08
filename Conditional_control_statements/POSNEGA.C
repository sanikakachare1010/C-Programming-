#include<stdio.h>
#include<conio.h>
int main()
{
	int Num;
	clrscr();
	Up:
	    printf("\n Enter number to check whether it is +ve or -Ve=");
	    scanf("%d",&Num);

	    if(Num==0)
	    {
	       printf("\n You have enter zero,Which is nautral.");
	       printf("\n Plese enter valid number...\n");
	       goto Up;
	    }
	    if(Num>0)
	    {
	       printf("\n Welcome you have enter Positive number");
	    }
	    else
	    {
	       printf("\n Welcome you have enter Negative number");
	    }
	    getch();
	    printf("\n Thanks For Interacting...");

	    getch();
	    return 0;
}


