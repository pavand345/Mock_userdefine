#include<stdio.h>
char *my_strcmp(char *s1,char *s2);
char mycmp(char *s1,char *s2)
{
        int i,j;
        for(i=0;((s1[i]==s2[i]));i++);
        if(s1[i]==s2[i]) printf("both are same\n");
       // else if(s1[i]>s2[i]) printf("s1 is larger\n");
//	else if(s2[i]>s1[i]) printf("s2 is larger\n");
	else printf("both are different\n");
}
void main()
{
	char s1[100],s2[100];

	printf("enter the string : ");
	scanf("%[^\n]s",s1);

	printf("enter 2nd the string : ");
	scanf(" %[^\n]s",s2);

//	my_strcmp(s1,s2);
	mycmp(s1,s2);
}
char *my_strcmp(char *s1,char *s2)
{
	int i;
	for(i=0;s2[i]&&s2[i];i++)
	{
		if(s1[i]!=s2[i])
			break;
	}
	if(s1[i]==s2[i])
		printf("Both strings are same\n");
	else if(s1[i]>s2[i])
		printf("s1 is greater than s2\n");
	else 
		printf("s2 is greater than s1\n");
}

