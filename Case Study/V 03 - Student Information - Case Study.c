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
            int Math;
            float Total;
            float Per;
};
int main()
{
            int i = 0
            struct Stud Std[3] = {};

            for(i = 0; i < 3; i++)
            {
                printf("\n Enter Student Roll_No :");
                scanf("%d",&Std[i].Roll_No);

                fflush(stdin);

                printf("\n Enter Student Name :");
                gets(Std[i].Name);

                printf("\n Enter Physics Marks :");
                scanf("%d",&Std[i].Phy);

                printf("\n Enter Chemistry Marks :");
                scanf("%d",&Std[i].Chem);

                printf("\n Enter Mathematics Marks:");
                scanf("%d",&Std[i].Math);

                Std[i].Total = Std.[i].Phy + Std[i].Chem +Std[i].Math;

                Std[i].Per = (Std[i].Total/300) * 100;
            }

            printf("\n Enter Any Key To Go Ahead =>");
            getch();

            printf("\n Entered Student Details Are => \n\n");

            for(i = 0; i < 3; i++ )
            {
                printf("\n\n======================******====================\n\n");

                printf("\n\t\t Roll Number = %d",Std[i].Roll_No);
                printf("\n\t\t Student Name = %s",Std[i].Name);
                printf("\n\t\t Physics Marks = %d",Std[i].Phy);
                printf("\n\t\t Chemistry Marks = %d",Std[i].Chem);
                printf("\n\t\t Mathematics Marks = %d",Std[i].Math);
                printf("\n\t\t Total Marks = %0.0f",Std[i].Total);
                printf("\n\t\t Percentage Marks = %0.3f",Std[i].Per);

                printf("\n\n======================******====================\n\n");
            }

            printf("\n Thanks For Using Our Application!!!!!");
            getch();
            return 0;

}
