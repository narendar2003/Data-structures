#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*a,*b,*n,*head;


void Merge(struct node *a,struct node *b)
{
	struct node *t;
	t = a;
	while(t!=NULL)
	{
		t=t->next;
	}
	t->next=b;
	b = NULL;
}

void Display()
{
	struct node *t;
	while(t!=NULL)
	{
		printf("%d",t->data);
		t=t->next; 
	}
}

int main()
{
	int c;
	while(1)
	{
		printf("Enter the choice: 1.Insertion,2.Display:");
		scanf("%d",&c);
		switch(c)
		{
			 case 1: Ins();
			         break;
			 case 2: Display();
			         break;
		}
	}
}
