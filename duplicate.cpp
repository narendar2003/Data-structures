#include<stdio.h>
int main()
{
	int i,j,k,n,a[n];
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				 for(k=j;k<n-1;k++)
				 {
				 	a[k]=a[k+1];
				 }
				 n--;
				 j--;
			}
		}
	}
	printf("After Deleting the duplicate elements:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
