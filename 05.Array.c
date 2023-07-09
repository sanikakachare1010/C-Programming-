#include<stdio.h>
#include<conio.h>
int main()
{
   int Array [7] = {};
   int i = 0;

   for(i = 0 ; i < 7 ; i++)
   {
       printf("\n Enter Value of Array  Element :");
       scanf("%d",&Array[i]);
   }

   printf("\n Value of 1st Element : %d",Array[0]);
   printf("\n Value of 2nd Element : %d",Array[1]);
   printf("\n Value of 3rd Element : %d",Array[2]);
   printf("\n Value of 4th Element : %d",Array[3]);
   printf("\n Value of 5th Element : %d",Array[4]);
   printf("\n Value of 6th Element : %d",Array[5]);
   printf("\n Value of 7th Element : %d",Array[6]);
   getch();
   return 0;
}

