#include<stdio.h>
void *mem_cpy(void *s1,void *s2,size_t n);
int main()
{
	char s1[100],s2[100],*p;
	int n;

	printf("Enter the frst string : ");
	scanf("%[^\n]s",s1);

	printf("Enter the s2 : ");
	scanf(" %[^\n]s",s2);

	printf("enter the n value : ");
	scanf("%d",&n);

	p=mem_cpy(s1,s2,n);
	puts(s1);
	puts(s2);
}
void *mem_cpy(void *s1,void *s2,size_t n)
{
	int i;
	char *p=s1;
	char *q=s2;
	for(i=0;i<n;i++)
	{
		p[i]=q[i];
	}
	return p;
}
