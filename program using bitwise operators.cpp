#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b values : ");
	scanf("%d%d",&a,&b);
	printf("\n***BITWISE OPERATIONS***");
	printf("\nusing bitwise operator(&) on %d&%d : %d",a,b,a&b);
	printf("\nusing bitwise operator(|) on %d|%d : %d",a,b,a|b);
	printf("\nusing bitwise operator(^) on %d^%d : %d",a,b,a^b);
	printf("\nusing bitwise operator left shift on %d<<%d : %d",a,b,a<<b);
	printf("\nusing bitwise operator right shift on %d>>%d : %d",a,b,a>>b);
	printf("\nusing bitwise operator(~) : %d",~a);
	return 0;
}
