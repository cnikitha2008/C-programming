#include<stdio.h>
int main()
{
	char a;
	char word[20];
	char sentence[2000];
	printf("\nenter a character : ");
	scanf(" %c",&a);
	printf("\nenter a word : ");
	scanf("%s",&word);
	printf("\nenter a sentence : ");
	scanf(" %[^\n]",&sentence);
	printf("\nThe letter is %c\nThe word is %s\nThe sentence is %s",a,word,sentence);
	return 0;
}
