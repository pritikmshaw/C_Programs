// check wheather the given word is alphabet or not
#include<stdio.h>
int main()
{
	char ch;
	printf("enter word : ");
	scanf("%c",&ch);
	if ( (ch>='a' || ch >= 'z') || (ch>='A'|| ch >='Z'))
	{
		printf(" alphabet ");
		/* code */
	}
	else
	{
		printf(" not a alphabet");
	}
	
}
