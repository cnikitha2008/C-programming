#include<stdio.h>
int main()
{
	char roll[20],name[20];
	int sub1,sub2,sub3,total;
	float avg;
	printf("enter roll and name ");
	scanf("%s%s",&roll,&name);
	printf("\nenter sub1,sub2,sub3 ");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
	total=sub1+sub2+sub3;
	avg=total/3;
	printf("\nname : %s\nroll no : %s",name,roll);
	if(sub1<40||sub2<40||sub3<40)
	{
		printf("\nFAIL");
	}
	else if(avg>70)
	{
		printf("\nDISTINCTION");
	}
	else if("avg>60")
	{
		printf("\nFIRST CLASS");
	}
	else
	{
		printf("\nPASS");
	}
	return 0;
}
