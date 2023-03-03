#include<stdio.h>
void main()
{
	char str[100],ch,*p;

	printf("enter the string : ");
	scanf("%[^\n]s",str);

	printf("enter the character : ");
	scanf("%c",&c);

	p=my_strrchr(str,ch);
	if(p>0)
		printf("%c found at %ld\n",ch,p-str);
	else
		printf("not found\n");
}
char *my_strrchr(char *s,int ch)
{
	int i;
	for(i=0;i<n;i++)
	{
