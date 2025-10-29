#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total;
	float avg;
	printf("enter five subject marks");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	avg=total/5;
	printf("\ntotal marks is %d",total);
	printf("\naverage marks is %.2f",avg);
	return 0;
}
