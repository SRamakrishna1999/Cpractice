#include<stdio.h>
int main()
{
	char str[20];
	printf("please enter string\n");
	scanf("%[^\n]s",str);
	int i=0,j=0;

	for(int i=0;str[i]!='\0';i++)
	
	j=i;
	
	printf("%d\n",j);
	for(i=0;i<j;i++,j--)
	{
		char temp=0;
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("%s\n",str);
	
}



