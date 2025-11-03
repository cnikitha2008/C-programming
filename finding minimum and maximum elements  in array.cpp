#include<stdio.h>
int main()
{
	int arr[100],n,i,min,max;
	printf("enter array size : \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value at position of arr[%d] : \n",i);
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
    }
		printf("maximum value is %d\n",max);
		printf("minimum value is %d",min);
		return 0;
}
