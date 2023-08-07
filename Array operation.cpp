#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}s,*head,*tail,*n;
void insert_beg(int num){
	n=(struct node*)malloc(sizeof(struct node));
	n->data=num;
	n->next=NULL;
	if(head==NULL){
		head=n;
		tail=n;
	}
	else{
		n->next=head;
		head=n;
	}
}
void insert_mid(int num,int mid){
	n=(struct node*)malloc(sizeof(struct node));
	n->data=num;
	n->next=NULL;
	if(head==NULL){
		head=n;
		tail=n;
	}
	struct node *t=head;
	while(t!=NULL&&t->data!=mid){
		t=t->next;
		if(head==NULL){
			break;
		}	
	}
	n->next=t->next;
	t->next=n;
}
void insert_end(int num){
	n=(struct node*)malloc(sizeof(struct node));
	n->data=num;
	n->next=NULL;
	if(head==NULL){
		head=n;
		tail=n;
	}
	else{
		tail->next=n;
		n->next=NULL;
	}
}
void display(){
	struct node *tp=head;
	if(head==NULL){
		printf("list is empty");
	}
	printf("elements:");
	while(tp!=NULL){
		printf("\n%d",tp->data);
		tp=tp->next;
	}
}
void delete(int num){
	struct node *tp=head;
	struct node *t;
	while(tp!=NULL){
		t=tp;
		if(head==NULL){
			printf("list is empty");
		}
		else if(tp==head && head->data==num){
			head=head->next;
			free(tp);
			break;
		}
		else if(tp->next->next==NULL && tail->data==num){
			t=t->next;
			tail=tp;
			free(t);
			break;			
		}
		else if(tp->next->data==num){
			tp->next=tp->next->next;
			t=t->next;
			t->next=NULL;
			free(t);
			break;		
		}
		tp=tp->next;				
	}
}
void search(int num){
	struct node *tp=head;
	int found=0;
	while(tp!=NULL){
		if(tp->data==num){
			found=1;
			break;
		}
		else{
			tp=tp->next;
		}
	}
	if(found==1){
		printf("element is found");
	}
	else{
		printf("element is not found");
	}
}

int main(){
	char input;
	do{
	printf("enter the choice 1.insertion 2.deletion 3.search 4.display:");
	int ch;
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("enter your choice 1.beginning 2.middle 3.end:");
			int ch1;
			scanf("%d",&ch1);
			switch(ch1){
				case 1:
					printf("enter the value to insert at beginning:");
					int num;
					scanf("%d",&num);
					insert_beg(num);
					printf("value inserted into list ");
					display();
					break;
				case 2:
					printf("enter the value to insert at middle:");
					int num2;
					scanf("%d",&num2);
					printf("enter value of mid that data to be inserted after:");
					int mid1;
					scanf("%d",&mid1);				
					insert_mid(num2,mid1);
					printf("value inserted to list");
					display();
					break;
				
				case 3:
					printf("enter the value to insert at end:");
					int num3;
					scanf("%d",&num3);
					insert_end(num3);
					printf("value inserted into list");
					display();
					break;
				default:
					printf("enter correct choice");
					
			}
			break;
		case 2:
			display();
			printf("\nenter the value to delete:");
			int num4;
			scanf("%d",&num4);
			delete(num4);
			display();
			break;
		case 3:
			printf("enter the element to search:");
			int num5;
			scanf("%d",&num5);
			search(num5);
			break;
		case 4:
			display();
			break;
		default:
			printf("enter corect choice");
		
	}
	getchar();
	printf("\ndo you want to continue enter any key if not enter # to exit:");
	scanf("%c",&input);
}while(input!='#');
return 0;
}
