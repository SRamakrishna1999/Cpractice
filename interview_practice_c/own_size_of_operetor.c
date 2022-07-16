#include<stdio.h>

#define size(x)  (char *)(&x+1)-(char *)(&x)

int main()
{
	int x=0;
	float y=0;
	char z=0;

	printf("%ld\n",size(x));
	printf("%ld\n",size(y));
	printf("%ld\n",size(z));
}
