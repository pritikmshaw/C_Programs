// find the maximum number using conditional operator
#include<stdio.h>
 int main() {
     int a , b , greater ;
     printf("enter the a and b : ");
     scanf("%d %d",&a,&b);
     greater = a > b ? a : b ;
     printf("larger = %d",greater);
    return 0;
}
