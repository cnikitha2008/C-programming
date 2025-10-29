# include <stdio.h>
#define PI 3.14
int main()
{
	float radius, area;
	printf("enter radius of a circle : ");
	scanf("%f",&radius);
    area = PI * radius * radius ;
    printf("\n The area of circe is %.2f", area);
    return 0;
}


