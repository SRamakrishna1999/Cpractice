#include<stdio.h>
int main()
{
	int n;
	printf("please enter number\n");
	scanf("%d",&n);
	if((n>>31)&1==1)
		printf("neg\n");
	else
		printf("pos\n");
}
