#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0;
    char ch='\0';
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i>=j)
            {
                printf(" %c ",ch);
                ch=ch+3;
                   if(ch>'Z')
                   {
                       ch='A'+(ch-'Z')-1;
                   }

            }
            else
            {
                printf(" ");
            }
            ///ch=ch+2;
        }
        printf("\n");
       /// ch=ch+2;
    }
    getch();
    return 0;
}
