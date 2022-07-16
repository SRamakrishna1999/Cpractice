#include<stdio.h>
#include<stdlib.h>
typedef struct linked
{
        int d;
        struct linked *link;
}list;
void display(list *h);
list * create(list *h);
void loop(list *h);

int main()
{
        list *h=NULL,*n=NULL,*l=NULL;
        int c=1;
        while(c!=4)
        {
                printf("1)create node\n2)disply\n3)loop\n4)break\n");
                printf("please enter your choice\n");
                scanf("%d",&c);
                if(c==1)
                {
                        n=create(h);
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
                        loop(h);
                if(c==4)
                        break;
        }
}

list * create(list *h)
{
        list * new=(list *)malloc(sizeof(list));
        printf("enter list data\n");
        scanf("%d",&new->d);
        new->link=h;
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
void loop(list *h)
{
        list *p=h,*q=h;
        while(q)
        {
		p=p->link;
		q=q->link;
		q=q->link;
               if(p==q)
		       break;

        }
	if(p==q)
        	printf("loop\n");
	else
		printf("not loop\n");
}


