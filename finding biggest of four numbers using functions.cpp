#include <stdio.h>
int biggest (int a , int b , int c, int d);
int main()
{
    int a,b,c,d,result;
    printf("enter a,b,c and d values : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    result= biggest (a,b,c,d);
    printf("\n%d is biggest of given four numbers", result);
    return 0;
}
int biggest (int a, int b , int c , int d)
{
   if(a>b && a>c && a>d)
   return 0;
   else if(b>c && b>d)
   return b;
   else if(c>d)
   return c;
   else
   return d;
}
