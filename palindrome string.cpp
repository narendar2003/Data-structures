#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s[10];
	printf("Enter the string:");
	scanf("%s",&s);
	int n = strlen(s);
	int j = n-1;
	char revstr[10];
	for(int i=0;i<n;i++)
	{
		revstr[i]=s[j];
		j--;
	}
	if(strcmp(s,revstr)==0)
	{
		printf("It is palindrome");
	}
	else
	{
		printf("It is not palindrome");
	}
}
