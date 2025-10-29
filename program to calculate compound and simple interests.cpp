#include<stdio.h>
#include<math.h>
int main()
{
	float principle,rate,si,ci,time;
	printf("enter principle amount : \n ");
	scanf("%f",&principle);
	printf("enter interest rate : \n");
	scanf("%f",&rate);
	printf("enter time in years : \n");
	scanf("%f",&time);
	si=(principle*rate*time)/100;
	ci=principle*(pow(1+rate/100,time)-1);
	printf("simple interest is %.2f\n",si);
	printf("compount interst is %.2f",ci);
	return 0;
}
