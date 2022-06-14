#include<stdio.h>
int main()
{
	unsigned int n=12345678;
	char *x=(char *)&n;
	printf("%d\n",*x);
	if(*x==78)
		printf("little\n");
	else
		printf("big\n");
}

