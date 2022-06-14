#include<stdio.h>
char * strcpy1(char str1[],char str2[]);
int main()
{
	char str1[10],str2[10];
	printf("please enter str1\n");
	scanf("%[^\n]s",str1);
	printf("please enter str2\n");
	scanf(" %[^\n]s",str2);
	strcpy1(str1,str2);
	printf("%s\n",str1);
}

char * strcpy1(char str1[],char str2[])
{
	int i=0;
	for(i=0;str2[i]!='\0';i++)
	{
		str1[i]=str2[i];
	}
	str1[i]='\0';
	return 0;
}
