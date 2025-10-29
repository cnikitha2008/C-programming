#include<stdio.h>
int main()
{
	int num,n,r=0,s=0;
	printf("enter n value : \n");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(num==s)
	{
		printf("%d is a palindrome",num);
	}
	else
	{
		printf("%d is not a palindrome",num);
	}
	return 0;
}
