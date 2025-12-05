#include<stdio.h>
int main()
{
	char a[100],b[100];
	int i,check=0;
	printf("enter first string : ");
	gets(a);
	printf("\nenter second string : ");
	gets(b);
	for(i=0;a[i]!='\0' && b[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
			check=1;
			break;
		}
	}
	if(check==0)
	{
		printf("\nstrings are same");
	}
	else
	{
		printf("\nstrings are not same");
	}
	return 0;
}
