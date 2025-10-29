#include<stdio.h>
int main()
{
	char symbol;
	float a,b;
	printf("***arithmetic operators***");
	printf("\n+\n-\n*\n/\n%");
	printf("\nenter your choice");
	scanf("%c",&symbol);
	printf("\nenter a and b values");
	scanf("%f%f",&a,&b);
	switch(symbol)
	{
		case '+' :
			printf("\nsum of %f and %f is %.2f",a,b,a+b);
			break;
		case '-' :
			printf("\ndif b/w %f and %f is %.2f",a,b,a-b);
			break;
		case '*' :
		    printf("\nmul of %f and %f is %.2f",a,b,a*b);
			break;
		case '/' :
		    printf("\ndiv of %f and %f is %.2f",a,b,a/b);
			break;
		default :
		    printf("\nwrong choice");						
	}
	return 0;
}

