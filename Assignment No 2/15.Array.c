///Create,Accept,Display Array Using Loop-With Macro,Find Count of Even & Odd & Null(Zero)Elements in that array.
#include<stdio.h>
#include<conio.h>
#define size 6

int main()
{
    int i =0 ,E_Cnt = 0,O_Cnt = 0,Z_Cnt = 0,Array[size]={};

    for(i=0;i<size;i++)
    {
        printf("\n Enter Array Element %d:",i+1);
        scanf("%d",&Array[i]);
    }
    for(i=0;i<size;i++)
    {
        if(Array[i]  == 0)
        {
            Z_Cnt++;
        }
        else if(Array[i]%2 ==0)
        {
            E_Cnt++;
        }
        else
        {
            O_Cnt++;
        }
    }
    printf("\n Count of Even Element in Array is %d",E_Cnt);
    printf("\n Count of Odd Element in Array is %d",O_Cnt);
    printf("\n Count of Zero  Element in Array is %d",Z_Cnt);

    getch();
    return 0;
}
