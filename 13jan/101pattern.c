#include<stdio.h>
#include<string.h>
int main()
{
	//code
    int i,n,j,lens1,lens2,count1=0,count2=0;	
	char s1[2000],s2[2000];
	printf("Enter the string you want to search 1[0]1 those type= ");
	scanf("%s",s1);
    printf("\n");
    scanf("%s",s2);
    printf("\n");
	printf("Input:\n");
	    printf("%d",n);
	    printf("%s",s1);
	    printf("\n");
        printf("%s",s2);
        lens1=strlen(s1);
        lens2=strlen(s2);
       i=0;
       while(s1[i]=='1')
            {
                while(s1[i+1]=='0' || s1[i+2]=='1')
                {
                    i++;
                    
                }
                
                count1++;
             i++;   
            }
             j=0;
       while(s2[j]=='1')
            {
                while(s2[j+1]=='0' || s2[j+2]=='1')
                {
                    j++;
                    
                }
                
                count2++;
             j++;   
            }
        
        
        printf("\n");
        printf("%d \n%d",count1,count2);
	    
	return 0;
}
