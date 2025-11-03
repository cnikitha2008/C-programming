#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50},i,index_value,new_value;
	printf("original array elements :");
	for(i=0;i<5;i++)
	{
		printf("\t%d",arr[i]);
	}
	printf("\nenter index value from (0 to 4) : ");
	scanf("%d",&index_value);
	printf("\nenter new value: ");
	scanf("%d",&new_value);
	arr[index_value]=new_value;
	printf("\nreplaced array elements : ");
	for(i=0;i<5;i++)
	{
	    printf("\t%d",arr[i]);	
    }
    return 0;
}
