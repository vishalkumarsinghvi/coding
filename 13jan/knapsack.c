#include<stdio.h>
#include<math.h>
#include<conio.h>

void main()
{
int i,j,n,m;
int w[10],v[10],c[10][10];
printf("Enter the item number n=");
scanf("%d",&n);
w[0]=0;
v[0]=0;
for(i=1;i<=n;i++)
{
                 printf("Enter the w[%d]=",i);
                 scanf("%d",&w[i]);
                 printf("Enter the v[%d]=",i);
                 scanf("%d",&v[i]);
}
for(i=0;i<=n;i++)
{
                 printf("w[%d]=%d \t",i,w[i]);
}
printf("\n");
for(i=0;i<=n;i++)
{
                 printf("v[%d]=%d \t",i,v[i]);
}

printf("Enter the Max weight m=");
scanf("%d",&m);

for(i=0;i<=n;i++)
{
                 for(j=0;j<=m;j++)
                 {
                                  if(w[i]==0 || j==0)
                                  {
                                             c[i][j]=0;
                                  }
                                  else if(w[i]>j)
                                  {
                                     c[i][j]=c[i-1][j]; 
                                  }
                                  else
                                  {
                                      if(c[i-1][j]>(v[i]+c[i-1][j-i]))
                                      {
                                      c[i][j]=c[i-1][j];
                                      }
                                      else
                                      {
                                      c[i][j]=v[i]+c[i-1][j-i];
                                      }
                                  }
                 }
}
for(i=0;i<=n;i++)
{
                 for(j=0;j<=m;j++)
                 {
                                  printf("%d\t",c[i][j]);
                 }
                 printf("\n");
}
printf("Maximum cost is =%d",c[n][m]);
getch();
}
