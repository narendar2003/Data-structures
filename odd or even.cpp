#include<stdio.h>
int main()
{
  int a[10],n;
  printf("Enter the size of array:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(int i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  printf("Even numbers:");
  for(int i=0;i<n;i++)
  {
  	if(a[i]%2==0)
  	{
  		printf("\n%d",a[i]);
	  }
  }
  printf("\nOdd numbers:");
  for(int j=0;j<n;j++)
  {
  	if(a[j]%2!=0)
  	{
  		printf("\n%d",a[j]);
	  }
  }
}
