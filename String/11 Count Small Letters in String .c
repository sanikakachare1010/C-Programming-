/// Count Small Letters in Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int Sml_cnt = 0 ,i = 0;

    printf("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
        {
            Sml_cnt++;

        }
        i++;
    }

    printf("\n Count of Small Letters in String is : %d",Sml_cnt);

    getch();
    return 0;
}
