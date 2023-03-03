#include<stdio.h>
void *my_strcat(char *dest,char *srci,size_t n);
void main()
{
	char str[100],str2[100];
	int n;

	printf("Enter the string : ");
	scanf("%[^\n]s",str);

	printf("Enter the string : ");
	scanf(" %[^\n]s",str2);

	printf("enter the no.of elements to concatanate to first string : ");
	scanf("%d",&n);

	my_strcat(str,str2,n);
	printf("%s\n",str);
	printf("%s\n",str2);
}
void *my_strcat(char *dest,char *src,size_t n)
{
	int i,j;
	for(i=0;dest[i];i++);
	for(j=0;j<n;i++,j++)
	{
		dest[i]=src[j];
	}
}
