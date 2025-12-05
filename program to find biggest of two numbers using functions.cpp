#include <stdio.h>
void big();
void big ()
{
    int a,b;
    printf("\nenter a and b values:");
    scanf("%d %d",&a,&b);
    if(a>b)
	{
    printf("%d is big",a);
    }
    else
    {
        printf("%d is big",b);
    }
    
}
int main()
{
    big();
    return 0;
}
