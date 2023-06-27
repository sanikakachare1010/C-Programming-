#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, Temp = 0;
    long long int Fact = 0;

    printf("\n Enter a number to get its factorial =");
    scanf("%d",&No);


    for(Temp = No, Fact = 1; Temp >0; Fact *= Temp, Temp--);

       printf("\n Factorial of %d is = %lld.", No,Fact);


    getch();
    return 0;

}
