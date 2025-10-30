#include <stdio.h>
int main()
 {
    int num, firstDigit, lastDigit,temp, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
    lastDigit = num % 10;
    while (num >= 10) 
	{
        num = num / 10;
    }
    firstDigit = num;
    if(temp<10)
    {
    	sum=temp;
	}
	else
	{
		sum=firstDigit+lastDigit;
	}
    printf("Sum of first and last digits = %d\n", sum);
    return 0;
}
