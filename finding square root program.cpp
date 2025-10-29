#include<stdio.h>
#include<math.h>
int main()
{
	double num,root;
	printf("enter an integer : ");
	scanf("%lf",&num);
	root=sqrt(num);
	printf("\nthe square of %.2lf is %.2lf",num,root);
	return 0;
}
