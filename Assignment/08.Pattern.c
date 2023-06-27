#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0,C=0,No=15;

    for(R=0;R<5;R++)
    {
        for(C=0;C<=R;C++)
        {
            printf(" %d ",No);
            No=No+5;
        }
        printf("\n");
    }
    getch();
    return 0;
}
