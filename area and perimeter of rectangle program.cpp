#include<stdio.h>;
int main()
{
	int l,b,perimeter,area;
    printf("enter l and b values : ");
    scanf("%d%d",&l,&b);
    perimeter=2*(l+b);
    area=l*b;
    printf("\nperimeter of rectangle = %d\narea of rectangle = %d",perimeter,area);
}
 
