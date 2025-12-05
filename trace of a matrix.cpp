#include<stdio.h>
int main()
{
	int a[100][100],n,i,j,sum=0;
	printf("enter array size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nenter value at a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i][i];
	}
	printf("\nTrace of a matrix = %d",sum);
	return 0;
}
