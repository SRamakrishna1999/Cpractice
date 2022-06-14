#include<stdio.h>
char * strncpy1(char str1[],char str2[],int n);
int main()
{
        char str1[10],str2[10];
        printf("please enter str1 string\n");
        scanf("%[^\n]s",str1);
        printf("please enter str2 string\n");
        scanf(" %[^\n]s",str2);
        int n=0,c=0;
        printf("entar n value\n");
        scanf("%d",&n);
        strncpy1(str1,str2,n);
	printf("%s\n",str1);
}

char * strncpy1(char str1[],char str2[],int n)
{
        int i=0;
        for(i=0;i<n;i++)
	{
		str1[i]=str2[i];
	}
	str1[i]='\0';
	return 0;
}


