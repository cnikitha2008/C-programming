#include <stdio.h>
int addition (int a , int b);
int main()
{
    int x,y, result;
    printf("enter x and y values");
    scanf("%d%d",&x,&y);
    result= addition (x,y);
    printf("\n%d", result);
    return 0;
}
int addition (int a, int b)
{
    int c;
    c=a+b;
    return c;
}
