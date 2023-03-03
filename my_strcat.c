#include<stdio.h>
void *my_strcat(char *dest,char *src);
void main()
{
	char str[100],str2[100];

	printf("Enter the string : ");
	scanf("%[^\n]s",str);

	printf("Enter the string : ");
	scanf(" %[^\n]s",str2);

	my_strcat(str,str2);
	printf("%s\n",str);
	printf("%s\n",str2);
}
void *my_strcat(char *dest,char *src)
{
	int i,j;
	for(i=0;dest[i];i++);
	for(j=0;src[j];i++,j++)
	{
		dest[i]=src[j];
	}
}
