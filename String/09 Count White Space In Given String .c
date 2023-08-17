///Count White Spaces in Given string
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int Spc_cnt = 0, i = 0;

    printf("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == ' ')
        {
            Spc_cnt++;
        }
        i++;
    }

    printf("\n Count of White Spaces Given String is : %d",Spc_cnt);

    getch();
    return 0;

}
