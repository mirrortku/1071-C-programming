#include <stdio.h>
#include <math.h>
 
int main(){
	int a,b,c;
	double x1,x2;
	printf("Enter a b c:");
	scanf("%d%d%d",&a,&b,&c);
	if(b*b-4*a*c>=0){
		x1 = (-b+sqrt(b*b-4*a*c))/2/a;
		x2 = (-b-sqrt(b*b-4*a*c))/2/a;
	}
	printf("For equation 2x^2 -3 x + 1 =0, two roots are\nx1 = %.1f\nx2 = %.1f",x1,x2);
	
	return 0;	
}
