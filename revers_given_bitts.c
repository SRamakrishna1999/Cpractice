
#include <stdio.h>
 
unsigned int reverseBits(unsigned int n)
{
    unsigned int rev = 0;
    while (n > 0)
    {
        rev =rev<< 1;
        if (n & 1 == 1)
            rev =rev ^ 1;
        n =n >> 1;
             
     }
    return rev;
}
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
    unsigned int a=0;
    unsigned int n = 11;
    printf("given bits\n");
    binary(n);
    a= reverseBits(n);
    printf("rev bits\n");
    binary(a);

    //printf("%d\n",a);
    return 0;
}
