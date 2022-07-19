#include <stdio.h>

int main()
{
    
    int n=0,r=0,ret=0,a=1,c=0;
    printf("please enter number\n");
    scanf("%d",&n);
    while(n)
    {
        r=n%2;
        ret=ret+a*r;
        n=n/2;
        a=a*10;
    }
    printf("%d\n",ret);
    //int c=0;
    while(ret!=0)
    {
        if((ret&1) == 1)
        {
            c++;
            printf("%d\n",c);
        }
        ret=ret>>1;    
    }
}
