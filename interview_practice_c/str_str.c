#include<stdio.h>
int str_str(char str1[],char str2[]);
int main()
{
	char str1[20],str2[20];

	printf("enter first string\n");
	scanf("%s",str1);
	printf("enter second string\n");
	scanf("%s",str2);
	int c=0;
	c=str_str(str1,str2);
	if(c==-1)
		printf("not found\n");
	else
		printf("found\n");
}

int str_str(char str1[],char str2[])
{
	int i=0,j=0;
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=0;str2[j]!='\0';j++)
		{
			if(str1[j+i]==str2[j])
			{
				if(str2[j+1=='\0'])
					return 1;
			}
			else
				break;
		}
	}
	return -1;
}

