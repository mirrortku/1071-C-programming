#include <stdio.h>

int main(){
	float c,f;
	printf("Enter temperature in C: ");
	scanf("%f",&c);
	f=(c*9.0/5.0)+32;
	printf("%.1f C = %.1f F\n\n",c,f);
	printf("Enter temperature in F: %.1f\n%.1f F = %.1f C",f,f,c);
	return 0;
} 
