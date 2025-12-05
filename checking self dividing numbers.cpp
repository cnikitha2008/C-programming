#include <stdio.h>
int isSelfDividing(int num) 
{
    int temp = num, digit;
    while (temp > 0) 
	{
        digit = temp % 10;
        if (digit == 0 || num % digit != 0) 
		{
            return 0;
        }
        temp /= 10;
    }
    return 1; 
}
int main() 
{
    int low, high;
    printf("Enter lower bound: ");
    scanf("%d", &low);
    printf("Enter upper bound: ");
    scanf("%d", &high);
    printf("Self-dividing numbers between %d and %d:\n", low, high);
    for (int i = low; i <= high; i++) 
	{
        if (isSelfDividing(i)) 
		{
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
