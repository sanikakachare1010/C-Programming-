///Create,Accept,Display Array Using Loop-With Macro,Find Maximum and 2nd Maximum Element in that array.
#include<stdio.h>
#include<conio.h>
# define size 10

int main()
{
    int i =0, Max = 0, Sec_Max =0, Flag = 0, Array[size]={};

    for(i=0;i<size;i++)
    {
        printf("\n Enter Array Element %d:",i+1);
        scanf("%d",&Array[i]);
    }
    for(i=0;i<size;i++)
    {
        if((i==0)||(Array[i]>Max))
        {
             Max = Array[i];
        }
    }
    for(i=0;i<size;i++)
    {
        if(Array[i] == Max)
        {
            continue;
        }
        if((Flag == 0)||(Array[i] >Sec_Max))
        {
            Sec_Max = Array[i];
            Flag = 1;
        }
    }
    printf("\n Maximum Element in Array is :%d",Max);
    printf("\n 2nd Maximum Element in Array is :%d",Sec_Max);

    getch();
    return 0;

}
