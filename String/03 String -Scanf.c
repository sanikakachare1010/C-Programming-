#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char Name[20] = "Unknown";
    char FNm[20] = "Jack Fruit";

    printf("\n String1 Value = %s.",Name);
    printf("\n  String2 Value = %s.",FNm);

    printf("\n Enter Your Name = ");
    gets(Name);

    printf("\n Enter Your Favorite Fruite = ");
    gets(FNm);

    printf("\n Name Entered is = %s",Name);
    printf("\n Favorite Fruit Name = %s",FNm);

    getch();
    return 0;

}
