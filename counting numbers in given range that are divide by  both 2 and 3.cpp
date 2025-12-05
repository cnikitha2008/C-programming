#include <stdio.h>
int main() 
{
    int M, N, count = 0;
    printf("Enter M: ");
    scanf("%d", &M);
    printf("Enter N: ");
    scanf("%d", &N);
    for (int i = M; i <= N; i++) 
	{
        if (i % 6 == 0) 
		{  
            count++;
        }
    }
    printf("Count of numbers divisible by both 2 and 3 between %d and %d is: %d\n", M, N, count);
    return 0;
}
