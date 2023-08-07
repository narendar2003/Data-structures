#include<stdio.h>
int main()
{
   int a[10];
   printf("Enter the elements:");
   for(int i=0;i<5;i++)
   {
   	 scanf("%d",&a[i]);
   }
   for(int i=0;i<5;i++)
   {
   	 for(int j=i+1;j<5;j++)
   	 {
   	 	if(a[i]==a[j])
   	 	{
   	 		printf("%d",j);
			}
		}
   }
}
