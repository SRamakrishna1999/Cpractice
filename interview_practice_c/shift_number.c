#include<stdio.h>

int main()
{
	unsigned int x=0x12345678;
	//x=(x<<24)|((x<<8)&(0x00FF0000))|((x>>8)&(0x0000FF00))|(x>>24);//78563412
	x=((x<<16)&(0xFF000000))|((x<<16)&(0x00FF0000))|((x>>16)&(0x0000FF00))|((x>>16)&(0x000000FF));//56781234
	printf("%x\n",x);
}
