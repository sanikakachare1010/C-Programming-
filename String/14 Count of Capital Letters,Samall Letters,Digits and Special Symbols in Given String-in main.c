#include<stdio.h>
#include<conio.h>
int main()
{
    char cSr[40] = {'\0'};
    int Cap_cnt = 0,Sm_cnt = 0,Dig_cnt = 0,Spc_cnt = 0, i = 0;

    printf("\n Enter a String : ");
    gets(cSr);

    while(cSr[i] != '\0')
    {
        if(cSr[i] >= 'A' && cSr[i] <= 'Z')
        {
            Cap_cnt++;
        }
        else if(cSr[i] >= 'a'&& cSr[i] <= 'z')
        {
            Sm_cnt++;
        }
        else if(cSr[i] >= '0' && cSr[i] <= '9')
        {
            Dig_cnt++;
        }
        else
        {
            Spc_cnt++;
        }
        i++;
    }

    printf("\n Count of Capital Letter in Given String is : %d",Cap_cnt);
    printf("\n Count of Small Letter in Given String is :%d",Sm_cnt);
    printf("\n Count of Digit in Given String is :%d",Dig_cnt);
    printf("\n Count of Spacial Symbols in Given String is :%d",Spc_cnt);

    getch();
    return 0;

}
