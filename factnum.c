/*
Given a number x, the task is to find first natural number i whose factorial is divisible by x.
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>

void main()
{
int x,i,factorial=1;
printf("Enter the number x= ");
scanf("%d",&x);
for(i=1;i<x;i++)
{
  factorial=factorial*i;
   if((factorial%x)==0)
   {
     printf("THe natural number is =%d",i);
     break;
   }
 
                
}

  getch();
}
