// odd or even
#include<stdio.h>
void odd_even(int num)
{
	if(num%2==0)
	{
		printf("even no.");
	}
	else
	{
		printf("odd no.");
	}
}
int main()
{
	int i;
	printf("enter ur no.: ");
	scanf("%d",&i);
	printf("%d is ",i);
	odd_even(i);
}
