#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter n value : ");
	scanf("%d",&n);
	for(i=1,k=1;i<=n;i++)
	{
		for(j=1;j<=i;j++,k++)
		{
			printf("%4d",k);
		}
		printf("\n");
	}
	return 0;
}
