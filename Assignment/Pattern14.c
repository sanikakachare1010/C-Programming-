#include<stdio.h>
#include<conio.h>
int main()
{
    int R= 0, C = 0 ,Cnt = 0;
    char ch ='A';

    printf("\n Enter number to print pattern :");
    scanf("%d",&Cnt);

    for(R = 1; R <= Cnt; R++)
    {

       for(C = 1; C <= Cnt; C++)
        {
            if( R == 1|| R == Cnt || C == 1 || C == Cnt)
            {
                if(C == 1 || C == Cnt)
                {
                    ch = 'A'+(R-1);
                }
                printf("%c",ch);
                ch++;
            }
            else
            {
                printf(" ");

            }
        }
        printf("\n");
    }
    getch();
    return 0 ;

}

