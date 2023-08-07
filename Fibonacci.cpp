#include<stdio.h>
int main()
{
	int a=0,b=1,n,c;
	printf("Enter n value:");
	scanf("%d",&n);
	printf("%d\t",a);
	printf("%d\t",b);
	for(int i=2;i<n;++i)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
}
