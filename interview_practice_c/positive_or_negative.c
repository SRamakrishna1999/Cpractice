#include<stdio.h>

int main()
{
	int n;
	printf("please enter num\n");
	scanf("%d",&n);

	if((n&(0x1<<31))==0)
		printf("positive\n");
	else
		printf("negitive\n");
}
