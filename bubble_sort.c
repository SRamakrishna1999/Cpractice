#include<stdio.h>
int main()
{
	int n;
	printf("please enter n value\n");
	scanf("%d",&n);

	int arr[n],i=0,j=0;

	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	//for(i=0;i<n;i++)
		//printf(" %d",arr[i]);
	
	for(i=0;i<n-1;i++)
	{

		for(j=0;j<n-1-i;j++)
		{
			int temp=0;
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
                printf("%d ",arr[i]);
}

