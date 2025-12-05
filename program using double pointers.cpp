#include<stdio.h>
int main()
{
	int a=10;
	int *ptr=&a;
	int **dptr;
	dptr=&ptr;
	printf("The value of a is %d",a);
	printf("\nThe address of a is %x",&a);
	printf("\nThe value of ptr is %x",ptr);
	printf("\nThe address of ptr is %x",&ptr);
	printf("\nThe ptr pointing value is %d",*ptr);
	printf("\nThe value of dptr is %x",dptr);
	printf("\nThe address of dptr is %x",&dptr);
	printf("\nThe dptr pointing value is %d",**dptr);
	printf("\n %d",*(&a));
	return 0;
}
