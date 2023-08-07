#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head,*tail,*n;
void Ins_at_Beg(int num)
{
   n=(struct node*)malloc(sizeof(struct node));
   n->data=num;
   n->next=NULL;
   if(head==NULL)
   {
   	 head=n;
   	 tail=n;
   }
   else
   {
   	 n->next=head;
   	 head=n;
   }
}
void Ins_at_Mid(int num,int mid)
{
	struct node *tp;
   n=(struct node*)malloc(sizeof(struct node));
   n->data=num;
   n->next=NULL;
   if(head==NULL)
   {
   	 head=n;
   	 tail=n;
   }
   for(tp=head;tp!=NULL;tp=tp->next)
   {
   	 if(tp->data==mid)
   	 {
   	 	break;
		}
   }
   n->next=tp->next;
   tp->next=n;
}
void Ins_at_End(int num)
{
   n=(struct node*)malloc(sizeof(struct node));
   n->data=num;
   n->next=NULL;
   if(head==NULL)
   {
   	 head=n;
   	 tail=n;
   }
   else
   {
   	 tail->next=n;
   	 tail=n;
   }
}
void Display()
{
	struct node *tp;
	tp = head;
	if(head==NULL)
	{
		printf("List is empty");
	}
	else
	{
		while(tp!=NULL)
		{
			printf("%d\n",tp->data);
			tp=tp->next;
		}
	}
}
int main()
{
	int c;
	while(1)
	{
	printf("Enter the choice: 1.Insert at begin ,2.Insert at middle,3.Insert at end,4.Display:,5.exit:");
	scanf("%d",&c);
	switch(c)
	{
		case 1: int n;
		        printf("Enter the number:");
		        scanf("%d",&n);
		        Ins_at_Beg(n);
		        break;
		case 2: 
		        int m,n1;
		        printf("Enter the number:");
		        scanf("%d",&n1);
		        printf("Enter mid value:");
		        scanf("%d",&m);
		        Ins_at_Mid(n1,m);
		        break;
		case 3:
			    int n2;
			    printf("Enter the number:");
			    scanf("%d",&n2);
			    Ins_at_End(n2);
			    break;
		case 4: Display();
		        break; 
		case 5: exit(1);
		        printf("Invalid Input");    
	}
}
}
