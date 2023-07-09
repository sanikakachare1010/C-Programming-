#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5

int main()
{
    int  i = 0,Src = 0 ,Array [size] = {};
    for(i = 0 ; i < size; i++)
    {
        printf("\n Enter Array Element :");
        scanf("%d",&Array[i]);
    }

    for(i = 0 ; i< size; i++)
    {
        printf("\n Element %d=%d",i+1,Array[i]);
    }

    getch();
    system("cls");

    printf("\n Enter Element to be search :");
    scanf("%d",&Src);

    for(i=0; i<size;i++)
    {
        if(Src == Array[i])
        {
            break;
        }
    }

    if(i == size)
    {
        printf("\n Element Not Found in Given Array");
    }
    else
    {
        printf("\n Element Found at Index :%d.",i);
    }
    printf("\n\n press any key to continue...");

    getch();
    return 0;

}
