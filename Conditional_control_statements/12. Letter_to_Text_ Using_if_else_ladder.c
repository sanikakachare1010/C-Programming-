#include<stdio.h>
#include<conio.h>
int main()
{
        char ch = '\0';

        printf("\n Enter a character =");
        ch = getche();

        if((ch == 'A') ||(ch == 'a')||(ch == 'w'))
        {
            printf("\n Welcome");
        }
        else if((ch == 'B')|| (ch == 'b')||(ch == 'x'))
        {
            printf("\n Have a nice day");
        }
        else if((ch == 'C')||(ch == 'c')||(ch == 'y'))
        {
            printf("\n Good Day");
        }
        else if((ch == 'D' )||(ch == 'c')||(ch == 'z'))
        {
            printf("\n Good  Bye");
        }
        else
        {
            printf("\n Invalid");
        }

        getch();
        return 0;

}
