#include<stdio.h>
#include<stdlib.h>
typedef struct linked
{
        int d;
        struct linked *link;
}list;
void display(list *h);
list * create();
list * delete(list *h);

int main()
{
        list *h=NULL,*n=NULL,*l=NULL;
        int c=1;
        while(c!=4)
        {
                printf("1)create node\n2)disply\n3)delete\n4)break\n");
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
                        h=delete(h);
                if(c==4)
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
list * delete(list *h)
{
	list *t=h,*q=t->link;
	int key=0;
	printf("enter key\n");
	scanf("%d",&key);
	
	if(t->d==key)
	{
		q=t->link;
		free(h);
		return q;
	}
	else
	{
		while(q->d!=key)
		{
			t=t->link;
			q=q->link;
			if(q==NULL)
			{
				printf("given key is not available\n");
				return h;
			}
		}
		q=t->link;
		t->link=q->link;
		free(q);
		return(h);
	}


}


