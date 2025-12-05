#include <stdio.h>
int main()
{
    int i, j,n;
    printf("enter n value : \n");
    scanf("%d",&n);
    for(i = n; i >= 1; i--) 
	{
        for(j = i; j <= n; j++) 
		    {
		       	printf("%d",j);
                printf(" ");
            }
        printf("\n");
    }
    return 0;
}
