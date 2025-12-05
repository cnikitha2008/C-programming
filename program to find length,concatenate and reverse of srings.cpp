#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int length;
	printf("enter a string1 : ");
	scanf("%s",&a);
	printf("enter a string2 : ");
	scanf("%s",&b);
	length=strlen(a);
	printf("\nThe length of string 1 : %d",length);
	strcat(a,b);
	printf("\nafter concatination : %s",a);
	strrev(b);
	printf("\nReverse of string 2 : %s",b);
	return 0;
}
