#include<stdio.h>
int strcmp1(char str1[],char str2[],int n);
int main()
{
        char str1[10],str2[10];
        printf("please enter str1 string\n");
        scanf("%s",str1);
        printf("please enter str2 string\n");
        scanf("%s",str2);
	
        int c=0,n=0;
	printf("please enter no of charecter\n");
	scanf("%d",&n);
        c=strcmp1(str1,str2,n);
        if(c==0)
                printf("sam\n");
        else if(c>0)
                printf("str1\n");
        else
                printf("str2\n");

}

int strcmp1(char str1[],char str2[],int n)
{
        int i=0,j=0;

	for(i=0;i<n;i++)
	{
        	if(str1[i]==str2[i])
        	{
                	if(str2[i+1]=='\0'&&str1[i+1]=='\0')
                        return 0;
        	}
	}
        return str1[i]-str2[i];
                                 
}	
