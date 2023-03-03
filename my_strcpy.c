#include<stdio.h>
void *my_strcpy(char *dest,char *src);
void main()
{
	char str[100],str2[100];

	printf("Enter the string : ");
	scanf("%[^\n]s",str);

	printf("Enter the string : ");
	scanf(" %[^\n]s",str2);

	my_strcpy(str,str2);
	printf("s1 : %s\n",str);
	printf("s2 : %s\n",str2);
}
void *my_strcpy(char *dest,char *src)
{
	int i;
	for(i=0;src[i];i++)
	{
		dest[i]=src[i];
	}
	dest[i]='\0';
}
