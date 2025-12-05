#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100],str3[100],str4[100],str5[100];
	int a,b;
	printf("enter str1, str2, str3, str4 words");
	scanf("%s%s%s%s",&str1,&str2,&str3,&str4);
	a=strlen(str1);
	strcpy(str5,str2);
	strcat(str3,str4);
    b=strcmp(str1,str2);
    printf("\nlength of str1 = %d",a);
    printf("\ncopied string is %s",str5);
    printf("\ncombination of str3 and str4 is %s",str3);
    printf("\nreverse of str1 is %s",strrev(str1));
    printf("\ncomparing str1 and str2 = %d",b);
    printf("\nconverting str4 into lower case : %s",strlwr(str4));
    printf("\nconverting str2 into upper case : %s",strupr(str2));
    return 0;
}
