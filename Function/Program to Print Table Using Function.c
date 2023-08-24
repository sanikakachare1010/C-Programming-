#include<stdio.h>
#include<conio.h>

 void Table(int);

 int main()
{
   int No = 0;

   printf("\n Enter a Number to Print its Table :");
   scanf("%d",&No);

   Table(No);

   printf("\n Thanks");

   getch();
   return 0;
}
void Table(int Num)
{
    int i = 0;

    printf("\n\n Table For %d is =>\n",Num);

    for(i = 1; i<= 10; i++)
    {
        printf("\n\n\t %d",i * Num);
    }

    return 0;

}
