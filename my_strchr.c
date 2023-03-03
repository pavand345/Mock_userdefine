#include<stdio.h>
char *my_strchr(char *str,int ch);
void main()
{
	char str[100],ch,*p;
	printf("enter the string : ");
	scanf("%[^\n]s",str);

	printf("enter the character : ");
	scanf(" %c",&ch);

	p=my_strchr(str,ch);
	if(p>0)
		printf("%c found at : %lu\n",ch,p-str);
	else 
		printf("not found\n");

}
char *my_strchr(char *str,int ch)
{
	int i;
	for(i=0;str[i];i++)
	{
		if(str[i]==ch)
			return (str+i);
	}
}
