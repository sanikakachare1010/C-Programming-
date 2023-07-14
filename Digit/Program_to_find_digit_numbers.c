#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0 ,cnt = 0;

    printf("\n Enter the number :");
    scanf("%d",&No);

    if(No == 0)
    {
        printf("\n There is only 1 digit in your number");
    }
    else
    {
         while (No > 0)
        {
            No = No /10 ;
            cnt++;
        }
        printf("\n There are %d digits in your number",cnt);
    }
    getch();
    return 0 ;
}
