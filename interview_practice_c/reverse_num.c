#include <stdio.h>

int main()
{
    
    int n=0,r=0,ret=0,a=1,c=0;
    printf("please enter number\n");
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        ret=ret*a+r;
        n=n/10;
        a=10;
    }
    printf("%d\n",ret);
}
