#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char ch='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i>=j)
            {
               printf(" %c ",ch);
               ch++;
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
        ch=ch+(5-i);
    }
    getch();
    return 0;
}
