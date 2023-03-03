#include<stdio.h>
void *my_strcpy(char *dest,char *src,size_t n);
void main()
{
	char str[100],str2[100];
	int n;

	printf("Enter the string : ");
	scanf("%[^\n]s",str);

	printf("Enter the string : ");
	scanf(" %[^\n]s",str2);

	printf("Enter the no.of elements to copy : ");
	scanf("%d",&n);

	my_strcpy(str,str2,n);
	printf("s1 : %s\n",str);
	printf("s2 : %s\n",str2);
}
void *my_strcpy(char *dest,char *src,size_t n)
{
	int i;
	for(i=0;i<n;i++)
	{
		dest[i]=src[i];
	}
}
