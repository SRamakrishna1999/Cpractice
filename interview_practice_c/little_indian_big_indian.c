#include<stdio.h>

int main()
{
	unsigned int x=12345678;

	char *c;
	c=(char *)(&x);
	printf("%d\n",*c);
	if(*c==78)
		printf("little endian\n");
	else
		printf("big endian\n");
}
