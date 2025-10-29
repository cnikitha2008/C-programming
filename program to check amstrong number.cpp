#include<stdio.h>
#include<math.h>
int main()
{
	int n,r=0,temp,digi_count,s=0;
	printf("enter n value : ");
	scanf("%d",&n);
	temp=n;
	digi_count=(int)log10(n)+1;
	while(n>0)
	{
		r=n%10;
		s=s+pow(r,digi_count);
		n=n/10;
	}
	if(temp==s)
	{
		printf("\n%d is an amstrong number",temp);
	}
	else
	{
		printf("\n%d is not an amstrong number",temp);
	}
	return 0;
}
