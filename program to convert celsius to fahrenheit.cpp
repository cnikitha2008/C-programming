#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("temperature in celsius : ");
	scanf("%f",&celsius);
	fahrenheit=(celsius*1.8)+32;
	printf("temperature in fahrenheit : %f",fahrenheit);
	return 0;
}
