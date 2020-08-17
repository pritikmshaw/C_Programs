// find the leap year
#include<stdio.h>
main()
{
	int year ;
	printf("enter the year \n");
	scanf("%d",&year);
//	if(year%4==0 || year%100==0 && year%400==0)
	if(year%400==0)
	printf("%d is a leap year",year);
	else if(year%100==0)
	printf(" not  a leap year");
	else if(year%4==0)
	printf("leap year");
	else
	printf("%d is not a leap year",year);
	return(0);
}
