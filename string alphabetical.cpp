#include<stdio.h>
#include<string.h>
int main()
{
   char s[10],temp;
   printf("Enter the string:");
   scanf("%s",&s);
   int n = strlen(s);
   for(int i=0;i<n;i++)
   {
   	 for(int j=i+1;j<n;j++)
   	 {
   	 	if(s[i]>s[j])
   	 	{
   	 		temp = s[i];
   	 		s[i]=s[j];
   	 		s[j]=temp;
			}
		}
   }
   printf("String in alphabetical order:");
   printf("%s",s);
}
