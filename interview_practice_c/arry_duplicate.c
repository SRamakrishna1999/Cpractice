#include<stdio.h>
#define size 10

int main()
{
        int arr[size],i=0,j=0,temp=0;

        printf("please enter arry elements\n");

        for(i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }
        for(i=0;i<size;i++)
        {
		temp=0;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				temp++;
			}
		}
		if(temp==0)
		{
			printf("%d ",arr[i]);
		}
        }
	/*
        for(i=0;i<size;i++)
        {
                printf("%d ",arr[i]);
        }*/
        printf("\n");
        return 0;
}

