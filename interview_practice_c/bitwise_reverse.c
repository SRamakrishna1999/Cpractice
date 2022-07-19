#include<stdio.h>

int main()
{
	int n=0,r=0,ret[20],a=1,i=0,j=0,m=0,r1=0,b=1;
	printf("please enter number\n");
	scanf("%d",&n);
	m=n;
	while(m)
	{
		r=m%2;
		r1=r1+b*r;
		m=m/2;
		b=b*10;
	}
	printf("%d\n",r1);

	while(n)
	{
		ret[i]=n%2;
		n=n/2;
		i++;
	}
	for(j=0;j<i;j++)
		printf("%d",ret[j]);

	printf("\n");
/*	int b=1,rev=0,r1=0;	
	while(ret)
	{
		r1=ret%10;
		if(r1==0)
			printf("0");
		//printf("hii\n");
		rev=(rev*b)+r1;
		ret=ret/10;
		b=10;
	}
	printf("%d\n",rev);*/

}



