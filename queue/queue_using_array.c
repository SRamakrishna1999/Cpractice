#include<stdio.h>
#define size 5
int enqueue(int queue[],int rar,int far);
int dequeue(int queue[],int rar,int far);
int main()
{
	int queue[size],rar=-1,far=-1,c=1;
	while(c!=3)
	{
		printf("1)enqueue\n2)dequeue\n3)break\n");
		printf("please enter choice\n");
		scanf("%d",&c);
		if(c==1)
			rar=enqueue(queue,rar,far);
		if(c==2)
			far=dequeue(queue,rar,far);
	}
}
int enqueue(int queue[],int rar,int far)
{
	if(rar==size-1 && far==-1)
	{
		printf("queue is full\n");
		return rar;
	}
	else
	{
		int n;
		printf("please enter element\n");
		scanf("%d",&n);
		rar++;
		queue[rar]=n;
		//return rar;
	
	printf("\nprasent queue is\n");
	int i=0;
	for(i=0;i<=rar;i++)
		printf("%d ",queue[i]);
	printf("\n");
	return rar;
	}	
}
int dequeue(int queue[],int rar,int far)
{
	if(rar==-1 || (rar==far))
	{
		printf("queue is empty\n");
		return far;
	}
	else
	{
		far++;
		//return far;
		int i=0;
		i=far;
		printf("\n");
		printf("present queue is\n");
	for(;i<=rar;i++)
		printf("%d ",queue[i]);
	printf("\n");
	return far;
	}
		
}

	
