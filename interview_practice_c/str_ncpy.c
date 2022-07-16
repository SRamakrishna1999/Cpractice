#include<stdio.h>
char * strcpy1(char str1[],char str2[],int n);
int main()
{
	char str1[10],str2[10];
	printf("please enter str1 string\n");
	scanf("%s",str1);
	printf("please enter str2 string\n");
	scanf("%s",str2);
	int n;
	printf("enter no of charecter\n");
	scanf("%d",&n);
	strcpy1(str1,str2,n);
	printf("%s\n",str1);
}

char * strcpy1(char str1[],char str2[],int n)
{
	int i=0,j=0;
	for(i=0,j=0;j<n;i++,j++)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
	return 0;
}
