#include <stdio.h>
int main() 
{
    char a[100], b[100];
    int i,j,len=0;
    printf("Enter first string: ");
    gets(a);
    printf("\nEnter second string: ");
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
    	len++;
	}
   	for(j=0;b[j]!='\0';j++)
   	{
    	a[len+j]=b[j];
	}
	a[len+j]='\0';
    printf("\nCombined string: %s",a);
    return 0;
}

