#include<stdio.h>
#include<conio.h>
int main()
{
    int R = 0, C = 0, Cnt = 0, No1 = 1, No2 = 0, No3 = 0 ;

    for( R = 1 ; R <= 5 ; R++ )
    {

       for(C = 1 ; C <=R ; C++)
       {

          if(R>=C)
            {
               printf(" %d",No3);
               No3 = No1 + No2 ;
               No1 = No2;
               No2 = No3;
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
