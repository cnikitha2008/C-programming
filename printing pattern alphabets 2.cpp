#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
	{
        char ch = 'A' + (n - 1 - i);  
        for(j = 0; j < n - i; j++) 
		{
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
