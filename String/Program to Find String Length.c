///Program to Accpet and Find String Length
#include<Stdio.h>
#include<conio.h>
int main()
{
    char ch[20] = {'\0'};
    int i = 0;

    printf("\n Enter a String :");
    gets(ch);

    while(ch[i] != '\0')
    {
        i++;

    }
    printf("\n Length of given string is : %d",i);

    getch();
    return 0;

}
