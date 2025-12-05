#include<stdio.h>
int main()
{
	int a=10,*ptr;
	float b=3.2,*ptr2;
	ptr=&a;
	ptr2=&b;
	printf("The value of a is %d",a);
	printf("\nThe address of a is %x",&a);
	printf("\nThe value of b is %f",b);
	printf("\nThe address of b is %x",&b);
	printf("\nThe value of ptr is %x",ptr);
	printf("\nThe address of ptr is %x",&ptr);
	printf("\nThe ptr pointing value is %d",*ptr);
	printf("\nThe value of ptr2 is %x",ptr2);
	printf("\nThe address of ptr id %x",&ptr2);
	printf("\nThe ptr2 pointing value is %f",*ptr2);
	return 0;
}
