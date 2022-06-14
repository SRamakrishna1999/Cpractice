
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
int main()
{
	unsigned int a=0;
    unsigned int n = 11;
    a= reverseBits(n);
    printf("%d\n",a);
    return 0;
}
