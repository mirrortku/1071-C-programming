#include<stdio.h>

int main(){
	int i,n1,n2,sum = 0;
	printf("Enter n1 n2:");
	scanf("%d %d",&n1,&n2);
	for(i=n1;i<=n2;i++){

		sum += i; 
	}
	printf("sum(%d,%d) = %d",n1,n2,sum);
}
