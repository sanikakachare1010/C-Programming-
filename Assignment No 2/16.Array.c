///Create,Accept,Display Array Using Loop-With Macro,find Summation of All Element in that array.
 #include<stdio.h>
 #include<conio.h>
 #define size 5

 int main()
 {
     int i =0 ,Sum =0, Array[size]={};

     for(i=0;i<size;i++)
     {
         printf("\n Enter Array Element %d :",i+1);
         scanf("%d",&Array[i]);
     }
     for(i=0;i<size;i++)
     {
        Sum = Sum +Array[i];
     }
     printf("\n Summation of Array Element is : %d" ,Sum);

     getch();
     return 0;
 }
