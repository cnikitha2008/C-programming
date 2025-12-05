#include<stdio.h>
int main()
{
    int a[100],n,i,low,high,mid,found=0,search;
	printf("enter array size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter value at a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\nenter search element : ");
	scanf("%d",&search);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(search==a[mid])
		{
			printf("\n searching element is found at %d location",mid);
			found=1;
			break;
		}
		else if(search>a[mid])
		{
			low=mid+1;
		}
		else if(search<a[mid])
		{
			high=mid-1;
		}
	}
	if(found==0)
	{
		printf("\nsearching element not found");
	}
	return 0;
}
