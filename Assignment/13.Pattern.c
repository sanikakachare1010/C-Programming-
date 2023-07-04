#include<stdio.h>
#include<conio.h>
int main()
{
    int i =0, j =0 ,No = 5 ;
    char ch='A';

    for(i=0;i<No;i++)
    {

       for(j=0;j<No;j++)
        {
            if(i == 0 || j == 0 || i == No-1 || j == No-1)
            {
                printf("%c",ch);

            }
            else
            {
                printf(" ");
            }
              ch++;
        }
         ch='A';
         printf("\n");

    }

    getch();
    return 0 ;

}
