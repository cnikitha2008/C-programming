#include<stdio.h>
int main()
{
	int arr[100],n,i,sum=0;
	printf("enter array size : \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value at position of arr[%d] : \n",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d is the sum of elements in given array",sum);
	return 0;
}
