// check number is +ve or -ve
#include<stdio.h>
void positivity(int i)
{
	if(i==0)
	{
		printf("is neither positive nor negative it's zero ");
	}
	else if(i>0)
	{
		printf("is positive number");
	}
	else
	{
		printf("is negative number");
	}
}
int main()
{
	int i;
	printf("enter the number: ");
	scanf("%d",&i);
	printf("%d ",i);
	positivity(i);
}
