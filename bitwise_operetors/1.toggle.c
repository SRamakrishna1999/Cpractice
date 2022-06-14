
#include<stdio.h>

void binary(unsigned int x)
{
	unsigned i=0;
	//printf("please enter number\n");
	//scanf("%d",&x);
	for(i=1<<31;i>0;i=i>>1)
	{
		x&i?printf("1"):printf("0");
	
	}
}



int main()
{
	unsigned int x,p=1;
	printf("please enter number\n");
        scanf("%d",&x);
	printf("before toggke\n");
	binary(x);
	printf("\n");
	x=x^(0x1<<p);
	printf("after toggle\n");
	binary(x);
}


