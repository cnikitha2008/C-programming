#include <stdio.h>
int main()
{
	int a=10;
	float b=3.2;
	char c='r';
	void *ptr;
	ptr=&a;
	printf("\nptr pointing value : %d",*(int*)ptr);
	ptr=&b;
	printf("\nptr pointing value : %f",*(float*)ptr);
	ptr=&c;
	printf("\nptr pointing value : %c",*(char*)ptr);
	return 0;
}
