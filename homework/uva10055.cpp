#include<stdio.h>

int main(){
	int n1,n2,temp,n3;
	while(scanf("%d %d",&n1,&n2)!=EOF){
		while(n1>n2){
			temp=n1;
			n1=n2;
			n2=temp;
		}
		n3=n2-n1;
		printf("%d\n",n3);	
	}
}
