///Create,Accept,Display Array Using Loop - With macro,Find Count of Even Elements in that array
#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0,Cnt =0,Array[size]={};

    for(i=0;i<size;i++)
    {
        printf("\n Enter Array Element %d :",i+1);
        scanf("%d",&Array[i]);

    }
    for(i=0;i<size;i++)
    {
        if(Array[i] % 2 == 0)
        {
            Cnt++;
        }

    }
    printf("\n Even Number Array is :%d",Cnt);

    getch();
    return 0;

}
