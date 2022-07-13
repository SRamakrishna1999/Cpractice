#include<stdio.h>
#define size 5
void printstack(int stack[],int top);
int push(int stack[],int top);
int pop(int stack[],int top);	
int main()
{
	int stack[size],top=-1,c=1;
	while(c!=4)
	{
		printf("1)push\n2)pop\n3)stack printing\n4)break\n");
		printf("please enter chooice\n");
		scanf("%d",&c);
		if(c==1)
			top=push(stack,top);
		if(c==2)
			top=pop(stack,top);
		if(c==3)
			printstack(stack,top);
	}
}

int push(int stack[],int top)
{
	if(top==size-1)
	{
		printf("stack is full\n");
		return top;
	}
	else
	{
		int n;
		printf("please enter data\n");
		scanf("%d",&n);
		top++;
		stack[top]=n;
		return top;
	}
}

int pop(int stack[],int top)
{
	if(top==-1)
	{
		printf("stack is empty\n");
		return top;
	}
	else
	{
		top--;
		return top;
	}
}
void printstack(int stack[],int top)
{
	int i=0;
	for(i=0;i<=top;i++)
		printf("%d ",stack[i]);
	printf("\n");
}


