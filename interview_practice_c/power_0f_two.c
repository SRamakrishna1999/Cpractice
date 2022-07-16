#include<stdio.h>

int main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	if(n&(n-1))
	{
		printf("not power\n");
	}
	else
		printf("power\n");
}
