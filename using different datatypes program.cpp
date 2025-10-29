#include<stdio.h>
main()
{
	char name[20];
	int age;
	float weight;
	char gender;
	printf("enter name : ");
	scanf("%s",&name);
	printf("\nenter age : ");
	scanf("%d",&age),
	printf("\nenter weight : ");
	scanf("%f",&weight);
	printf("\nenter gender");
	scanf(" %c",&gender);
	printf("\n%s\n%d\n%f\n%c",name,age,weight,gender);
	
}
