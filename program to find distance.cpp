#include<stdio.h>
int main()
{
	float a,u,d;
	int t;
	printf("enter acceleration, time, initial velocity : ");
	scanf("%f%d%f",&a,&t,&u);
	d=(u*t)+(a*t*t)/2;
	printf("distance : %.2f",d);
	return 0;
}
