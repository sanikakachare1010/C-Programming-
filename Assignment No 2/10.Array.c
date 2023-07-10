///Create,Accept,Display Array Using Loop-with macro,Find Minimum Element in that array.
#include<stdio.h>
#include<conio.h>

#define size 5

int main()
{
    int i = 0, Min = 0, Array[size]={};

    for(i = 0; i < size; i++)
    {
        printf("\n Enter Array Element :");
        scanf("%d",&Array[i]);
    }
    for(i = 0; i < size;i++)
    {
        printf("\n Element :%d=%d",i+1,Array[i]);

        if(Array[i]<Min)
        {
            Min = Array[i];
        }

    }

    printf("\n Minimum Element is :%d",Min);

    getch();
    return 0;
}
