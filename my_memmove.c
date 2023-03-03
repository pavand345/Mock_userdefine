#include<stdio.h>
void *my_memmove(void *dest,void *src,size_t n);
void main()
{
	int arr[]={10,20,30,40,50,60,70,80,90};
	int n=(sizeof(arr)/sizeof(arr[0]));
	int dest[n],i;
	my_memmove(dest,arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",dest[i]);
	}
	printf("\n");
}
void *my_memmove(void *dest,void *src,size_t n)
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
