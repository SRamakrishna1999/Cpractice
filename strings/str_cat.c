#include<stdio.h>
char * strcat1(char str1[],char str2[]);
int main()
{
	char str1[10],str2[10];
	printf("please enter str1 string\n");
	scanf("%s",str1);
	printf("please enter str2 string\n");
	scanf("%s",str2);
	strcat1(str1,str2);
	printf("%s\n",str1);
}

char * strcat1(char str1[],char str2[])
{
	int i=0,j=0;
	for(i=0;str1[i]!='\0';i++);
	for(j=0;str2[j]!='\0';i++,j++)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
	return 0;
}
