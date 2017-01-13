#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	//code
    int i,n;	
	char c[2000];
	printf("Enter the how many string you want to search 1[0]1 those type= ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	    scanf("%s",&c[i]);
	}
	printf("Input of string is:");
	for(i=0;i<n;i++)
	{
	    printf("%c",c[i]);
	}
	return 0;
	getch();
}
