#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i==3)
		{
			printf("loop is break\n");
			break;
		}
		printf("%d\n",i);
	}
	printf("out of for loop");
}
