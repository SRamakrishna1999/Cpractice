#include<stdio.h>

#define size(x)  (char *)(&x+1)-(char *)(&x)

int main()
{
	int x=2;
	float y=2.2;
	char z='a';
	double a=2.22;
	printf("int size  %lu\n",size(x));
	printf("float size  %lu\n",size(y));
	printf("char size %lu\n",size(z));
	printf("double size %lu\n",size(a));
}

