#include<stdio.h>
int strchar1(char str[],char ch);
int main()
{
	char str[10],ch;
	printf("please enter string\n");
	scanf("%[^\n]s",str);
	printf("please enter charecter\n");
	scanf(" %c",&ch);
	int c=0;
	c=strchar1(str,ch);
	if(c==1)
		printf("found\n");
	else
		printf("not\n");
}

int strchar1(char str[],char ch)
{
	int i=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
			return 1;
	}
	return -1;
}

