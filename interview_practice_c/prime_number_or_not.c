#include<stdio.h>

int main()
{
	int n,i=0,c=0;
	printf("please enter number\n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			c++;
			break;
		}
	}
	if(c==0)
		printf("prime\n");
	else
		printf("not prime\n");
}
