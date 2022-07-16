#include<stdio.h>

int main()
{
	int n;
	printf("please enter numbdr\n");
	scanf("%d",&n);
	n=-(~n);
	printf("%d\n",n);
}
