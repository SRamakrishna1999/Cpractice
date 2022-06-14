#include<stdio.h>
int main()
{
	int n;
	printf("please enter number\n");
	scanf("%d",&n);
	n=-(~n);
	printf("%d\n",n);
}
