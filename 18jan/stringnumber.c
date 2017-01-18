#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
#include <stdio.h>
	int line,i,length[100],len=0;
    char string[50][100],c;//string line
    printf("How many line?\n");
    scanf("%d",&line);

    for(i=0;i<line;i++)
    {   
        scanf("%s", string[i]);
    }
    printf("You entered:\n");
    for(i=0;i<line;i++)
    {   
        puts(string[i]);
    }
    for(i=0;i<line;i++)
    {   
     length[i]=strlen(string[i]);
    }
    for(i=0;i<line;i++)
    {
       if(sscanf(string[i], "%*[^0123456789]%d", &len)==1)
       {
        if((length[i]-1)==len)
        {
                          printf("Output:1\n");
        }
        else
        printf("Output:0\n");
        }
    }
 
     getch();
}
