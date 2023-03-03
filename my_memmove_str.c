#include<stdio.h>
void *my_memmove(void* dest,void *src,size_t n);
void main()
{
	char str[100],str2[100],*p;
	printf("Enter the string : ");
	scanf("%[^\n]s",str);

	printf("Ente the 2nd string : ");
	scanf(" %[^\n]s",str2);
	
	int n;
	printf("Enter the n value : ");
	scanf("%d",&n);

	my_memmove(str2,str,n);
	puts(str);
	puts(str2);
}
void *my_memmove(void* dest,void *src,size_t n)
{
	char *p=(char *)src;
	char *q=(char *)dest;
	for(int i=0;i<n;i++)
	{
		q[i]=p[i];
		p++;
		q++;
	}
}
