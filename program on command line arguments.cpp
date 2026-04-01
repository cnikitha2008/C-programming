#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	if(argc<5)
	{
		printf("format %s <name> <marks1> <marks2> <marks3>",argv[0]);
		return 1;
	}
	char *name = argv[1];
	int m1 = atoi(argv[2]);
	int m2 = atoi(argv[3]);
	int m3 = atoi(argv[4]);
	int total = m1+m2+m3;
	printf("\nname of the program : %s",argv[0]);
	printf("\nname of the student : %s",name);
	printf("\nmarks : %d %d %d ",m1,m2,m3);
	printf("\ntotal marks = %d",total);
	return 0;
}
