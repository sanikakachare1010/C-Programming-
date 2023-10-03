#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud
{
    int Roll_No ;
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

        printf("\n Enter Student Details =>\n");

        printf("\n Enter Student Roll Number : ");
        scanf("%d",&Std.Roll_No);

        fflush(stdin);

        printf("\n Enter Student Name : ");
        gets(Std.Name);

        printf("\n Enter Physic Marks : ");
        scanf("%d",&Std.Phy);

        printf("\n Enter Chemistry Marks : ");
        scanf("%d",&Std.Chem);

        printf("\n Enter Maths Marks : ");
        scanf("%d",&Std.Maths);


        Std.Total =Std.Phy+Std.Chem+Std.Maths;

        Std.Per = (Std.Total / 300) * 100;

        printf("\n Enter any to go ahead => ");
        getch();

        printf("\n\n===========================******=====================================");

        printf("\n\t\t Student Roll No : %d",Std.Roll_No);
        printf("\n\t\t Student Name : %s",Std.Name);
        printf("\n\t\t Physics Marks : %d",Std.Maths);
        printf("\n\t\t Chemistry  Marks : %d",Std.Chem);
        printf("\n\t\t Mathematics Marks : %d",Std.Phy);
        printf("\n\t\t Total Marks = %0.0f",Std.Total);
        printf("\n\t\t Percentage = %0.3f",Std.Per);

        printf("\n\n===========================******=====================================");

        printf("\n Thanks For Using Our Application !!!!!!!!");

       getch();
       return 0;

}
