#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
	printf("enter array size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter value at a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
			    temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n after sorting the array elements are:");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
