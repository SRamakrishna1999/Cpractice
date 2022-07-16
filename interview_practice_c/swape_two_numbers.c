#include<stdio.h>

int main()
{
	int x,y;
	printf("please enter x value\n");
	scanf("%d",&x);
	printf("please enter y value\n");
        scanf("%d",&y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("x = %d	y = %d\n",x,y);
}

