#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char FirstName[20] = "";
    char LastName[20] = "";
    char Name[20] = "";

    printf("\n Enter First Name :");
    gets(FirstName);
    printf("\n Enter Last Name :");
    gets(LastName);

    getch();

    strcat(Name,FirstName);
    strcat(Name," ");
    strcat(Name,LastName);


    printf("\n\n First Name is : %s",FirstName);
    printf("\n\n Last Name  is: %s",LastName);
    printf("\n\n FullName Generated is :%s",Name);

    getch();
    return 0;

}
