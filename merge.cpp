#include<stdio.h>
int main()
{
	int a[10],b[10],c[10],k,i,j;
	printf("Enter arr1 elements:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter arr2 elements:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i];
	}
	  k=i;
	for(i=0;i<5;i++)
	{
	   c[k]=b[i];
	   k++;
	}
	printf("Merged array elements:");
	for(j=0;j<k;j++)
	{
		printf("%d\t",c[j]);
	}
}
