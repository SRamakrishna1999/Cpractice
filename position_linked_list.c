#include<stdio.h>
#include<stdlib.h>
typedef struct name
{
        int d;
        struct name *link;
}data;

void traverse(data *h);
data * creatnod();
data * position(data *h);
int main()
{
        data *h=NULL,*l=NULL,*n=NULL;
        int c=1;
        while(c!=4)
        {
                printf("1)creation\n2)traverse\n3)possition\n4)break\n");
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
			h=position(h);
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

data * position(data *h)
{
	data *t=h,*new=NULL;
	int p=0;
	printf("please enter position\n");
	scanf("%d",&p);	
	int i=0;
	if(p==1)
	{
		new=creatnod();
		new->link=h;
		h=new;
	}
	else
	{
		while(i<p-1)
		{
			if(t)
			t=t->link;
			if(!t)
			{
				printf("given position is not available\n");
				return h;
			}
		i++;
		}
		new=creatnod();
		new->link=t->link;
		t->link=new;
	}
	return h;
}

	









