#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter n value : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%2d",i);
		}
		printf("\n");
	}
	return 0;
}
