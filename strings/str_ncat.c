#include<stdio.h>
char * strncat1(char str1[],char str2[],int n);
int main()
{
	char str1[10],str2[10];
	printf("please enter str1 string\n");
	scanf("%s",str1);
	printf("please enter str2 string\n");
	scanf("%s",str2);
	int n=0;
	printf("entar n value\n");
	scanf("%d",&n);
	strncat1(str1,str2,n);
	printf("%s\n",str1);
}

char * strncat1(char str1[],char str2[],int n)
{
	int i=0,j=0;
	for(i=0;str1[i]!='\0';i++);
	for(j=0;j<n;j++,i++)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
	return 0;
}
