///Count Vowels in Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int V_cnt = 0, i = 0;

    printf("\n Enter a string : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
     if(cSrc[i] == 'a' || cSrc[i] == 'e' || cSrc[i] == 'i'||cSrc[i] == 'o' || cSrc[i] == 'u'|| cSrc[i] == 'A'|| cSrc[i] == 'E'|| cSrc[i] =='I'||cSrc[i] == 'O'|| cSrc[i] == 'U')
     {
         V_cnt++;
     }
     i++;

    }
    printf("\n Count of Vowels in Given String is  : %d",V_cnt);

    getch();
    return 0;
}

