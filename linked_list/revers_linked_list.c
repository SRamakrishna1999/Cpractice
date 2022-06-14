#include<stdio.h>
#include<stdlib.h>
typedef struct name
{
        int d;
        struct name *link;
}data;

void traverse(data *h);
data * creatnod();
data * reverse(data *h);
int main()
{
        data *h=NULL,*l=NULL,*n=NULL;
        int c=1;
        while(c!=4)
        {
                printf("1)creation\n2)traverse\n3)reverse\n4)break\n");
                printf("please enter your choice\n");
                scanf("%d",&c);
                if(c==1)
                {
                        n=creatnod();
                        if(h==NULL)
                                h=n;
                        else
                                l->link=n;
                        l=n;
                }
                if(c==2)
                        traverse(h);
                if(c==4)
                        return 0;
                if(c==3)
                {
                        h=reverse(h);
                }
        }
}

data * creatnod()
{
        data *new=(data *)malloc(sizeof (data));
        printf("please enter data\n");
        scanf("%d",&new->d);
        new->link=NULL;
        return new;
}

void traverse(data *h)
{
        data *t=h;
        while(t)
        {
                printf("%d ",t->d);
                t=t->link;
        }
        printf("\n");
}

data * reverse(data *h)
{        
	data *p=h, *q=p->link, *r=q->link;
	while(q)
	{
		q->link=p;
		p=q;
		q=r;
		//r=r->link;
		if(r)
			r=r->link;
	}
	h->link=NULL;
	h=p;
	return h;
}


