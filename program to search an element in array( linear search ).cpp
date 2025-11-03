#include<stdio.h>
int main()
{
	int arr[100],n,i,search,found=0;
	printf("enter n value : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter value at arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nenter searching element : ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==arr[i])
		{
			printf("\nsearching element found at %d",i);
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("\nsearching element is not found");
	}
	return 0;
}
