#include<stdio.h>
int main()
{
	int arr[100],n,i,dif;
	printf("enter array size : \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value at arr[%d] : \n",i);
		scanf("%d",&arr[i]);
	}
	dif=arr[0];
	for(i=1;i<n;i++)
	{
		dif=dif-arr[i];
	}
	printf("%d is the subracted value of array elements in order",dif);
	return 0;
}
