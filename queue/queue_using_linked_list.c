#include<stdio.h>
#include<stdlib.h>

typedef struct queue
{
	int d;
	struct queue *link;
}queue;

void printqueue(queue *h);
queue * dequeue(queue *h);
queue * encode();
int main()
{
	queue *h=NULL,*n=NULL,*l=NULL;
	int c=1;
	while(c!=4)
	{
		printf("1)encode\n2)decode\n3)print queue\n4)break\n");
		printf("please enter choice\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				{
					n=encode();
					if(h==NULL)
						h=n;
					else
						l->link=n;
					l=n;
					break;
				}
			case 2:
				{
					h=dequeue(h);
					break;
				}	
			case 3:
				{
					printqueue(h);
					break;
				}
			case 4:
				return 0;
		}
	}
}
queue * encode()
{
	queue * new=(queue *)malloc(sizeof(queue));
	printf("please enter data\n");
	scanf("%d",&new->d);
	new->link=NULL;
	return new;
}
queue * dequeue(queue *h)
{
	queue *q=NULL;
	q=h->link;
	free(h);
	return q;
}
void printqueue(queue *h)
{
	if(h==NULL)
		printf("queue is empty\n");
	else
	{
		while(h)
		{
			printf("%d ",h->d);
			h=h->link;
		}
		printf("\n");
	}
}
	
