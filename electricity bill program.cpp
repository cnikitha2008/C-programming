#include<stdio.h>
int main()
{
	int units;
	float amount,charge,total_amount;
	printf("enter units consumed");
	scanf("%d",&units);
	if(units<=50)
	{
		amount=units*2.50;
		charge=25;
	}
    else if(units<=100)
    {
    	amount=units*3.00;
    	charge=50;
	}
	else if(units<=200)
	{
		amount=units*3.50;
		charge=75;
	}
	else if(units<=300)
	{
		amount=units*4.00;
		charge=100;
	}
	else
	{
		amount=units*5;
		charge=125;
	}
	total_amount = amount+charge;
	printf("total amount is %.2f",total_amount);
	return 0;
}
