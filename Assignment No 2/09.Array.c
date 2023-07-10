///Create,Accept,Display Array Using Loop-with macro,Find Maximum Element in that array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5

int main()
{
    int i =0, Max = 0, Array[size]={};

    for(i = 0; i<size;i++)
    {
        printf("\n Enter Array  Element :");
        scanf("%d",&Array[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("\n Element : %d=%d",i+1,Array[i]);

        if(Array[i]>Max)
        {
            Max = Array[i];
        }

    }

    printf("\n Maximum Element is : %d",Max);

    getch();
    return 0;
}
