#include<stdio.h>
int strncat1(char str1[],char str2[],int n);
int main()
{
        char str1[10],str2[10];
        printf("please enter str1 string\n");
        scanf("%s",str1);
        printf("please enter str2 string\n");
        scanf("%s",str2);
        int n=0,c=0;
        printf("entar n value\n");
        scanf("%d",&n);
        c=strncat1(str1,str2,n);
	if(c>0)
        	printf("str1\n");
	else if(c<0)
		printf("str2\n");
	else
		printf("equal\n");
}

int  strncat1(char str1[],char str2[],int n)
{
        int i=0,j=0;
	for(i=0;i<n;i++)
	{
		if(str1[j]==str2[j])
		{
		//	if(str1[j+1]=='\0'&&str2[j+1])
			return 0;
		}

	}
	return str1[i]-str2[i];
	
}
                
