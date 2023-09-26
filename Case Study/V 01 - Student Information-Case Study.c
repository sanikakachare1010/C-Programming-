#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud
{
    int Roll_No;
    char Name[40];
    int Phy;
    int Chem;
    int Maths;
    float Total;
    float Per;
};
int main()
{
    struct Stud Std;

    Std.Roll_No = 15;
    strcpy(Std.Name, "Raj Patil");
    Std.Phy = 70;
    Std.Chem = 80;
    Std.Maths = 70;

    Std.Total = Std.Phy + Std.Chem +Std.Maths;

    Std.Per = (Std.Total /300)*100;

    printf("\n Student Roll No : %d",Std.Roll_No);
    printf("\n Student Roll No : %s",Std.Name);
    printf("\n Total Marks = %0.0f",Std.Total);
    printf("\n Percentage = %0.3f",Std.Per);

    printf("\n Thanks for Using Our Application!!!!!");

    getch();
    return 0;
}
