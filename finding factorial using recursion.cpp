#include<stdio.h>
int fact(int n);
int main()
{
	int n,result;
	printf("enter n value : ");
	scanf("%d",&n);
	result=fact(n);
	printf("\n%d is the factorial of %d",result,n);
	return 0;
}
int fact(int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	}
	else
	{
	    return 1;	
	}
}
