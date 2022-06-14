#include<stdio.h>
int strlen1(char str[]);
int main()
{
	char str[10];
	printf("please enter string\n");
	scanf("%s",str);
	int c=0;
	c=strlen1(str);
	printf("len = %d\n",c);
}

int strlen1(char str[])
{
	int i=0;
	for(i=0;str[i]!='\0';i++);
	return i;
}
