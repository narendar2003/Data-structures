#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
	printf("Enter first string:");
	scanf("%s",&s1);
	printf("Enter second string:");
	scanf("%s",&s2);
	int c = strcmp(s1,s2);
	if(c==0)
	{
		printf("String is valid");
	}
	else
	{
		printf("String is not valid");
	}
}
