#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int No=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" %d ",No);
            No++;
        }
        printf("\n");
    }
    getch();
    return 0;
}
