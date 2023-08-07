#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*top,*n;

void Push(int num)
{
	n = (struct node *)malloc(sizeof(struct node));
	n->data=num;
	n->next=NULL;
	
	if(top==NULL)
	{
		top=n;
    }
    else
    {
    	n->next=top;
    	top=n;
	}
}
void Pop()
{
	struct node *t;
	if(top==NULL)
	{
		top=n;
	}
	else
	{
		t=top;
		top=top->next;
		t->next=NULL;
		free(t);
	}
}
void Display()
{
	struct node *t;
	t = top;
	if(top==NULL)
	{
		printf("Stack is empty");
	}
	else
	{
		while(t!=NULL)
		{
			printf("%d\n",t->data);
			t=t->next;
		}
	}
}

void Peek()
{
	struct node *t;
	t = top;
	if(top==NULL)
	{
		printf("List is empty");
	}
	printf("%d\n",t->data);
}

int main()
{
	int c,n;
	while(1)
	{
		printf("Enter the choice: 1.Push ,2.Pop ,3.Display,4.Top:");
		scanf("%d",&c);
		switch(c)
		{
			case 1: printf("Enter the element:");
			        scanf("%d",&n);
			        Push(n);
			        break;
			case 2: Pop();
			        break;
			case 3: Display();
			        break;
			case 4: Peek();
			        break;
			case 5: exit(1);
			        break;
			default : printf("Enter valid input");
		}
	}
}
