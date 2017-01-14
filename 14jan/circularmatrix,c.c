/*
Given a matrix of n*n size, the task is to find whether all rows are circular rotations of each other or not.
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
int i,j,n;
int a[10][10];
printf("Enter the size of matrix n*n ,n= ");
scanf("%d,&n");
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
  printf("Enter matrix element a[%d][%d]",i,j);
  scanf("%d",&a[i][j]);
 }
}
printf("Input is");
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
  printf("%d \t",a[i][j]);
 }
}
     getch();
}
