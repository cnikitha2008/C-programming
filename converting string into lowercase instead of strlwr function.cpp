#include<stdio.h>
int main()
{
	char a[10]="ADITYA";
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]=a[i]+32;
		}
	}
	printf("\ngiven string in lowercase is %s",a);
	return 0;
}
