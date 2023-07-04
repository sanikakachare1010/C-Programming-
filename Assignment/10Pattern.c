#include<stdio.h>
#include<conio.h>
int main()
{
    int R = 0 , C = 0 ;
    int  ch = 2;

    for(R = 0 ; R <= 5 ; R++)
    {
        for(C = 0 ; C <= R ; C++)
        {
            printf(" %d",ch);
            ch++;
        }
        ch = 2;
        printf("\n");

    }

    getch();
    return 0 ;

}
