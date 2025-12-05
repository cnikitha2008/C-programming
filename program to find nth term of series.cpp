#include<stdio.h>
int main()
{
	int a,b,c,n,sum=0,i;
	printf("enter nth term : ");
	scanf("%d",&n);
	printf("\nenter a,b,c first 3 values of series: ");
	scanf("%d%d%d",&a,&b,&c);
	for(i=4;i<=n;i++)
	{
		sum=a+b+c;
		a=b;
		b=c;
		c=sum;
	}
	printf("\n%d term of series is %d",n,sum);
	return 0;
}

