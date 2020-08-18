// checking alphabet using ascii value
#include<stdio.h>
int main()
{
	char ch;
	printf("enter word : ");
	scanf("%c",&ch);
	if ( (ch>= 97 && ch <= 122 ) || (ch>= 65 && ch <= 90))
	{
		printf(" alphabet ");
		/* code */
	}
	else
	{
		printf(" not a alphabet");
	}
	return(0);
	
}
