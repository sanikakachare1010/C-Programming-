/// Program to Accept And Copy String Using While.
#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[20]={'\0'};
    char cDest[20]={};
    int i =0;

    printf("\n Enter a string :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
         cDest[i]= cSrc[i];
         i++;
    }
    cDest[i] ='\0';

    printf("\n Given string is = %s !!!",cSrc);

    printf("\n Copied to New String is = %s $$$",cDest);

    getch();
    return 0;
}
