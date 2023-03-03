#include<stdio.h>
void *my_memcpy_arr(void *dest,void *src,size_t n);
int main()
{
	int src[]={10,20,30,40,50,60,70,80,90};
	int n = (sizeof(src)/sizeof(src[0]));
	int dest[n],i;
	my_memcpy_arr(dest,src,sizeof(src));
	for(i=0;i<n;i++)
		printf("%d ",dest[i]);
	printf("\n");
}
void *my_memcpy_arr(void *dest,void *src,size_t n)
{
	char *p=(char *)src;
	char *q=(char *)dest;
	for(int i=0;i<n;i++)
		q[i]=p[i];
}
