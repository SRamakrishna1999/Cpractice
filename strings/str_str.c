#include<stdio.h>
int strstr1(char str1[], char str2[]);
int main()
{
	char str1[10],str2[10];
	int n=0;
	printf("please enter first string\n");
	scanf("%s",str1);
	printf("please enter sub string\n");
	scanf("%s",str2);
	n=strstr1(str1,str2);
	if(n==1)
		printf("found\n");
	else
		printf("not\n");
}

int strstr1(char str1[], char str2[])
{
	int i=0,j=0;
	for(i=0;*(str1+1)!='\0';i++)
	{
		for(j=0;*(str2+j)!='\0';j++)
		{
			if(*(str1+i+j)==*(str2+j))
				if(*(str2+j+1)=='\0')
					return 1;
		}
	}
	return -1;
}
	
