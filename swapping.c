// swap 2 nos without 3rd variable
#include<stdio.h>
int swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	return(a,b);
}
int main()
{
	int a ,b;
	printf("enter a and b: ");
	scanf("%d %d",&a,&b);
	swap(a,b);
/*	a=a+b;
	b=a-b;
	a=a-b; */
	printf(" swapped value is a=%d and b=%d\n",b,a);
	


// method 2 : Using Arithmetic operators * and /


	int c ,d;
	printf("enter c and d: ");
	scanf("%d %d",&c,&d);
	
	c=c*d;
	d=c/d;
	c=c/d; 
	printf(" swapped value is a=%d and b=%d",c,d);
	
}
