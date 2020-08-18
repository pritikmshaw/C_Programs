// check whether the number is a upper case lower case or special character
#include<stdio.h>
// condition for checking the program using if
void check(char ch)
{
	if(ch>=97 && ch<=122)
	{
		printf(" lower case ");	
	}
	else if( ch>=65 && ch<=90 )
	{
		printf(" upper case");
	}
	else if( ch>=48 && ch<=57)
	{
		printf(" number");
	}
	else
	{
		printf(" symbol");
	}
}
int main()
{
	char ch;
	printf(" enter your choice: ");
	scanf("%c",&ch);
	printf("%c is a ",ch);
	check(ch);
	return(0);
}
