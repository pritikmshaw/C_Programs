// find odd or even without mod
#include<stdio.h>
int odd_even(int n)
{
	return(!(n & 1));
}
int main()
{
	int i;
	printf("enter no: ");
	scanf("%d",&i);
	printf("no is ");
	odd_even(i)? printf("even") : printf("odd");
	return(0);
}
