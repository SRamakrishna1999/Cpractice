#include<stdio.h>
int main()
{
	int n=4,i,j;
	for(i=0,j=31;i<j;i++,j--)
	{
		if((n&(1<<i)) != (n&(1<<j)))
		{
			n=n^(1<<i);
			n=n^(1<<j);
		}
	}
	//printf("%d",n);
	while(n)
	{
	if(n%2==0)
		printf("0");
	else
		printf("1");
	n=n>>1;
	}

}
