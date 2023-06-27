#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '0';

    printf("\n Enter a Character = ");
    ch = getche();

    switch(ch)
    {
          case 'A':
          case 'a':
                     printf("\n Welcome");
                     break;
          case 'B':
          case 'b':
                    printf("\n Good Morning");
                    break ;
          case 'C':
          case 'c':
                    printf("\n Have a Nice Day");
                    break;
          case 'D':
          case 'd':
                   printf("\n Good Day");
                   break;
          default:
                  printf("\n Invalid");
                  break;

        }
        getch();
        return 0;
}
