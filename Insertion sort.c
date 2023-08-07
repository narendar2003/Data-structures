#include<stdio.h>
int main()
{
	int a[10],i,n,j;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Insertion sort:\n");
	for(i=1;i<n;i++)
	{
		int key=a[i];
		 j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
