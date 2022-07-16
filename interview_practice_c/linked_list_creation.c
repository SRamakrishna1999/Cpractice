#include<stdio.h>
#include<stdlib.h>
typedef struct linked
{
	int d;
	struct linked *link;
}list;
void display(list *h);
list * create();

int main()
{
	list *h=NULL,*n=NULL,*l=NULL;
	int c=1;
	while(c!=3)
	{
		printf("1)create node\n2)disply\n3)quit\n");
		printf("please enter your choice\n");
		scanf("%d",&c);
		if(c==1)
		{
			n=create();
			if(h==NULL)
				h=n;
			else
				l->link=n;
			l=n;
		}
		if(c==2)
		{
			display(h);
			printf("\n");
		}
		if(c==3)
			break;
	}
}

list * create()
{
	list * new=(list *)malloc(sizeof(list));
	printf("enter list data\n");
	scanf("%d",&new->d);
	new->link=NULL;
	return new;
}

void display(list *h)
{
	list *t=h;
	while(t)
	{
		printf("%d ",t->d);
		t=t->link;
	}
}


