#include<stdio.h>
char * strrchr1(char str[],char str2[],char ch);
int main()
{
	char str[100],str2[10];
	printf("please enter string\n");
	scanf("%[^\n]s",str);
	char ch;
	printf("please enter charecter\n");
	scanf(" %c",&ch);
	strrchr1(str,str2,ch);
	printf("%s\n",str2);
}

char * strrchr1(char str[],char str2[],char ch)
{
	int i=0,j=0;
	for(i=0;str[i]!='\0';i++);
	for(;;i--)
	{
		if(str[i]==ch)
			break;
		if(i==0)
		{
			printf("given charecter is not found\n");
			break;
		}
	}
	for(j=0;str[i]!='\0';i++,j++)
		str2[j]=str[i];
	str2[j]='\0';

	return 0;
}

	

