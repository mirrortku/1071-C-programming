#include<stdio.h>

int main(){
	int v,t,vt;
	while(scanf("%d %d",&v,&t)!=EOF){
		vt=v*2*t;
		printf("%d\n",vt);
	}
	return 0;
}
