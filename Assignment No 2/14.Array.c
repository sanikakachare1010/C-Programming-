///Create,Accept,Display Array Using Loop-With Macro,Find Count of Null(Zero)Elements in that array.
#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0, Z_Cnt = 0, Cnt = 0, Array[size]={};

    for(i=0;i<size;i++)
    {
        printf("\n Enter Array Element %d:",i+1);
        scanf("%d",&Array[i]);
    }
    for(i=0;i<size;i++)
    {
        if(Array[i]==0)
        {
            Cnt++;
        }

    }
     printf("\n Count of Zero Elements in Array is :%d",Cnt);

     getch();
     return 0;
}
