#include<stdio.h>

void binary(unsigned int n)
{
        unsigned int i=0;
        for(i=1<<31;i>0;i=i>>1)
        {
                n&i?printf("1"):printf("0");
        }
        printf("\n");
}

int main()
{
        unsigned int n=0,p=0;
        printf("plase enter num\n");
        scanf("%d",&n);
        binary(n);

        printf("please enter position\n");
        scanf("%d",&p);
        n=n^(0x1<<p);
        binary(n);
}

