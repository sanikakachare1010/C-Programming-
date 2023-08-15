///Program to Accpet and Print FullNAme of User USing strcat .
#include<stdio.h>
#include<conio.h>
///#include<string.h>

int main()
{
    char FirstName[20] = "";
    char MiddleName[20] = "";
    char LastName[20] = "";
    char Name[60] = "";

    printf("\n Enter First Name :");
    gets(FirstName);
    printf("\n Enter Middle Name :");
    gets(MiddleName);
    printf("\n Enter Last Name :");
    gets(LastName);

    getch();

    strcat(Name, FirstName);
    strcat(Name, " ");
    strcat(Name, MiddleName);
    strcat(Name, " ");
    strcat(Name, LastName);

    printf("\n=========================****=================\n");

    printf("\n First Name : %s",FirstName);
    printf("\n Middle Name : %s",MiddleName);
    printf("\n Last Name : %s",LastName);
    printf("\n Full Name Generated is : %s",Name);

    printf("\n=========================****=================\n");

    getch();
    return 0;

}
