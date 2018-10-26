#include<stdio.h>

int main(){
	long long n,k;
    while(scanf("%11d",&n)!=EOF){
		k = (1 + n)/2;
        k = k*k*2-1;
        printf("%lld\n",k*3-6);
	}
	return 0;   
}
