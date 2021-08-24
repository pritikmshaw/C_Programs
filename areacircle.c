// cal area of circle and vol of cylinder 
#include<stdio.h>
int main() {
	int r = 5;
	float pi = 3.14;
	float area;
	area = pi * r*r;
	printf("area = %f\n",area);
	int h = 4;
	float vol;
	 vol = pi * r *r *h;
	printf("volume = %f\n",vol);
	return 0;
}
