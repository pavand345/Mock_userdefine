#include<stdio.h>
int my_strcmp(char *s1,char *s2, size_t n);
void main()
{
	char s1[100],s2[100];
	int n,p;

	printf("enter the string : ");
	scanf("%[^\n]s",s1);

	printf("enter 2nd the string : ");
	scanf(" %[^\n]s",s2);

	printf("Enter the no.of elements to compare : ");
	scanf("%d",&n);

	p=my_strcmp(s1,s2,n);
	if(p==n)
		printf("Both strings are same\n");
	else if(s1>s2)
		printf("s1 is greater than s2\n");
	else 
		printf("s2 is greater than s1\n");
}
int my_strcmp(char *s1,char *s2,size_t n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s1[i]!=s2[i])
		{
			return i;
			break;
		}
	}
}
