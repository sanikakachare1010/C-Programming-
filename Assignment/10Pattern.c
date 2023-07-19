#include<stdio.h>
#include<conio.h>
int main()
{
    int R = 0 , C = 0 , No = 0,Cnt =0;

    printf("\n Enter size of Pattern :");
    scanf("%d",&No);

    for(R = 1 ; R <= No ; R++)
    {
        for(C = 1,Cnt = 2 ; C <= No ; C++,Cnt++)
        {
          if(R >= C)
          {
              printf(" %d",Cnt);
              Cnt = Cnt + 1;
          }
        }
        printf("\n");
    }
    getch();
    return 0 ;
}
