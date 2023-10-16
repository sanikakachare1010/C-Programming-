#include<stdio.h>
#include<Conio.h>
int main()
{
    int  R =0,C=0,i = 5 ;

    for(R=0;R<=i;R++)
    {
        for(C=0;C<=i;C++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
