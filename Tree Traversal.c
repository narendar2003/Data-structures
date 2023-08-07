#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

void inorderTraversal(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	inorderTraversal(root->left);
	printf("%d->",root->data);
	inorderTraversal(root->right);
}
void preorderTraversal(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	printf("%d->",root->data);
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}
void postorderTraversal(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	printf("%d->",root->data);
}
struct node* createnode(num)
{
	struct node * n = malloc(sizeof(struct node));
	n->data=num;
	n->left=NULL;
	n->right=NULL;
	
	return n;
}
struct node *insertLeft(struct node *root,int num)
{
	root->left=createnode(num);
	return root->left;
}
struct node *insertRight(struct node *root,int num)
{
	root->right=createnode(num);
	return root->right;
}
int main()
{
	struct node *root=createnode(1);
	insertLeft(root,12);
	insertRight(root,9);
	
	insertLeft(root->left,5);
	insertRight(root->left,6);
	
	printf("Inorder Traversal:\n");
	inorderTraversal(root);
	printf("\nPreorder Traversal:\n");
	preorderTraversal(root);
	printf("\nPostorder Traversal:\n");
	postorderTraversal(root);
}
