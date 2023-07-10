///Create ,Accept,Display Array Using Loop- With macro,Find Count Of Given Element in that array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 6

int main()
{
    int i = 0 , Cnt = 0 , Array[size]={};

    for(i = 0; i < size; i++)
    {
        printf("\n Enter Array Element :");
        scanf("%d",&Array[i]);
    }
    for(i = 0; i < size; i++)
    {
        printf("\n Element %d=%d",i+1,Array[i]);
        Cnt = Cnt + Array[i];

    }
    printf("\n Total Count of Elememt :%d",Cnt);

    getch();
    return 0;
}

