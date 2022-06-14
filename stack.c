/*#include<stdio.h>
int main()
{
	char x[2];
	if((&x[1]-&x[0]<0))
		printf("down stack\n");
	else
		printf("up stack\n");
}
*/

#include<stdlib.h>
#include<stdio.h>
struct student
{
	int x;
	char y;
	float z;
};
#define container(ptr,type,number)   ((type*) ((char*)ptr -(char*)&(((type*)0)->number)))
int main()
{
	struct student *ptr = (struct student *)malloc(sizeof(struct student));
	struct student *q = NULL;
	printf("%p\n",(q = container(&ptr->z,struct student,z)));

	printf("%p\n",&(ptr->z));
	printf("%p\n",&(ptr->x));
	printf("%p\n",&(ptr->y));

	printf("%p\n",&(q->z));
	printf("%p\n",&(q->x));
	printf("%p\n",&(q->y));

}



