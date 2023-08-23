#include<stdio.h>
#include<conio.h>
int main()
{
    char cSr[50] ={'\0'};
    int Cap_Cnt = 0,i = 0;

    printf("\n Enter a String :");
    gets(cSr);

    while(cSr[i] != '\0')
    {
       if(cSr[i] >= 'A' && cSr[i] <= 'Z')
       {
           Cap_Cnt++;
       }
       i++;
    }
    printf("\n Count of Capital Letters in Given String is = %d.",Cap_Cnt);

     getch();
     return 0;

}
