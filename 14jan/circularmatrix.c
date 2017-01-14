/*
Given a matrix of n*n size, the task is to find whether all rows are circular rotations of each other or not.
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdbool.h>
void main()
{
 int i,j,n,k,l,temp;
 int a[10][10];
 printf("Enter the size of matrix n*n ,n= ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
  for(j=0;j<n;j++)
   {
   printf("Enter matrix element a[%d][%d]=",i,j);
   scanf("%d",&a[i][j]);
   }
  }
 printf("Input is\n");
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
   printf("%d \t",a[i][j]);
   }
   printf("\n");
  }
 printf("Output is:");
 for(i=1;i<n;i++)
  {
  j=0;
  for(l=0;l<i;l++)
 {
                        temp=a[i][j];
                        for(k=0;k<n;k++)
                        {
                        a[i][j+k]=a[i][j+k+1];
                        if(k==n-1)
                        {
                        a[i][j+k]=temp;
                        }        
                        }
 }
}
for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
   printf("%d \t",a[i][j]);
   }
   printf("\n");
  }

 bool testCond;
 for(j=0;j<n;j++)
   {
                for(i=0;i<n-1;i++)
                {
                     if(a[i][j]==a[i+1][j])
                     {testCond=true;}
                     else
                     {testCond=false; }    
                }
                
   }
  if(testCond==true)
 {
    
   printf("Yes\n");
   printf("All rows are rotated permutation of each other.");
}

else
printf("No\n");
printf("All rows are not rotated permutation of each other.");

getch();
}
