#include <stdio.h>
int main() 
{
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = n; i >= 1; i--) 
	{
        char ch = 'A' + (i - 1); 
        for(j = 1; j <= n - i + 1; j++) 
		{
            printf("%c ", ch);
        }

        printf("\n");
    }

    return 0;
}
