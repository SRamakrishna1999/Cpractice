#include<stdio.h>
int main()
{
	int x,y;
	printf("please enter numbers\n");
	scanf("%d%d",&x,&y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("x=%d  y=%d\n",x,y);
}
