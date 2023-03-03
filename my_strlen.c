#include<stdio.h>
int my_strlen(char *str);
void main()
{
	char str[100];
	int p;
	printf("enter the string : ");
	scanf("%[^\n]s",str);
	
	p=my_strlen(str);
	printf("The length of the string is : %d\n",p);
}
int my_strlen(char *str)
{
	int i;
	for(i=0;str[i];i++);
	return i;
}

