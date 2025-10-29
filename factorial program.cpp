#include<stdio.h>
int main()
{
	int n,a,p=1;
	printf("enter n value : ");
	scanf("%d",&n);
	for(a=n;a>=1;a--)
	{
		p=p*a;
	}
	printf("%d is the factorial of %d",p,n);
	return 0;
}
