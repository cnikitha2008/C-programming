#include<stdio.h>
int main()
{
	int arr[100],n,i;
	printf("enter array size : \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value at position of arr[%d] : \n",i);
		scanf("%d",&arr[i]);
	}
	printf("The reversed array values are :");
	for(i=n-1;i>=0;i--)
	{
		printf("\t%d",arr[i]);
	}
	return 0;
}
