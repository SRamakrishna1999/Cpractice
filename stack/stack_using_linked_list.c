#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
	int d;
	struct stack *link;
}stack;


void printstack(stack *h);
stack * push();
stack * pop(stack *h);
int main()
{
	stack *h=NULL,*n=NULL,*l=NULL;
	int c=1;
	while(c!=4)
	{
		printf("1)push\n2)pop\n3)print stack\n4)break\n");
		printf("please enter your chooice\n");
		scanf("%d",&c);
		if(c==1)
		{
			n=push();
			if(h==NULL)
				h=n;
			else
				l->link=n;
			l=n;
		}
		if(c==2)
			h=pop(h);
		if(c==3)
			printstack(h);
	}
}
stack * push()
{
	stack *new=(stack *)malloc(sizeof(stack));
	printf("please enter element\n");
	scanf("%d",&new->d);
	new->link=NULL;
	return new;
}
stack * pop(stack *h)
{
	stack *t=h,*s=t->link,*q=NULL;
	if(h==NULL)
                {
                        printf("stack is empty\n");
                        return h;
                }
	else
	{ 
		int key=0;
		printf("please enter key\n");
		scanf(" %d",&key);
		if(t->d==key)
		{
			free(h);
			return h=NULL;
		}
		else
		{
	
		while(s->d!=key)
		{
			if(s)
			{
			t=t->link;
			s=s->link;
			}
			//if(!s)
			//{
			//	printf("last element is deleted now\n");
			//	return h;
			//}

		}
		t->link=NULL;
		free(s);
		return h;
		}
	}
}

void printstack(stack *h)
{
	stack *t=h;
	while(t)
	{
		printf("%d ",t->d);
		t=t->link;
	}
	printf("\n");
}



	
