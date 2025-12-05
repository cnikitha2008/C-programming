#include<stdio.h>
void addition(int a,int b);
int main()
{
	int a,b;
	printf("enter a,b values : ");
	scanf("%d%d",&a,&b);
	addition(a,b);
	return 0;
}
void addition(int x,int y)
{
	int c;
	c=x+y;
	printf("%d",c);
}
