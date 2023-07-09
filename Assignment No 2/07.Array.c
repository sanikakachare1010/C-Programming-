#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5

int main()
{
    int i = 0 ,Src = 0, Array[size] = {};

    for(i =0 ; i<size ; i++)
    {
        printf("\n Enter Array Element :");
        scanf("%d",&Array[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("\n Element %d=%d",i+1,Array[i]);
    }
    getch();
    system("cls");

    printf("\n Enter Element to Search :");
    scanf("%d",&Src);

    for(i=0;i<size;i++)
    {
       if(Src == Array[size])
       {
           break;
       }
    }
    if(i == size)
    {
        printf("\n Element are Not Found Given Array.");
    }
    else
    {
        printf("\n Element Are Found At Location : %d",Array[size]);
    }
    printf("\n\nPress any key to continue....");

    getch();
    return 0;
}

