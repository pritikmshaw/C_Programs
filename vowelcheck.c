// vowel or consonant 
#include<stdio.h>
void vowelcheck(char ch)
{
	if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
	printf(" vowel ");
	else
	printf(" consonant");
}
int main()
{
	char ch;
	printf(" enter word : ");
	scanf("%c",&ch);
	printf("%c is a ",ch);
	vowelcheck(ch);
}
