#include<stdio.h>
int main()
{
	int *ptr=NULL;
	printf("\nThe value of ptr is %x",ptr);
	printf("\nThe address of ptr is %x",&ptr);
	printf("\nThe ptr pointing value is %d",*ptr);
	return 0;
}
