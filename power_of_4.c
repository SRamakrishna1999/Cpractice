#include<stdio.h>
int main()
{
	int n;
	printf("please enter number\n");
	scanf("%d",&n);
	if((n&(n-1))==0)
	{
		int c=0;
		while(n)
		{
			if((n&1)==0)
				c++;
			n=n>>1;
		}
//		printf("%d\n",c);
		if ((c&1)==0)
			printf("power\n");
		else
			printf("not\n");
	}
	else
		printf("not\n");
}
