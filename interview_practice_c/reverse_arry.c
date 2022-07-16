#include<stdio.h>
#define size 5

int main()
{
	int arr[size],i=0,j=0,temp=0;
	
	printf("please enter arry elements\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	j=size-1;
	for(i=0;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
