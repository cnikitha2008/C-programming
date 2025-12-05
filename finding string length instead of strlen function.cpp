#include<stdio.h>
int main()
{
	int i,len=0;
	char a[100];
	printf("enter a string");
	gets(a);
	for(i=0 ; a[i]!='\0' ; i++)
	{
		len++;
	}
	printf("\nThe length of given string is %d",len);
	return 0;
}
