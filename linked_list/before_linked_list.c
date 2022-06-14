#include<stdio.h>
#include<stdlib.h>
typedef struct name
{
        int d;
        struct name *link;
}data;

void traverse(data *h);
data * creatnod();
data * before(data *h);
int main()
{
        data *h=NULL,*l=NULL,*n=NULL;
        int c=1;
        while(c!=4)
        {
                printf("1)creation\n2)traverse\n3)before\n4)break\n");
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
                        h=before(h);
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

data * before(data *h)
{
	data *t=h,*s=t->link,*new=NULL;
	int key=0;
	printf("please enter key\n");
	scanf("%d",&key);
	if(key==t->d)
	{
		new=creatnod();
		new->link=h;
		h=new;
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
			if(!s)
			{
				printf("given key is not available\n");
				return h;
			}
		}
		new=creatnod();
		new->link=t->link;
		t->link=new;
		return h;
	}
}


