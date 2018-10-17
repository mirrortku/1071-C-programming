#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	int height,time;
	scanf("%d",&n);
	while(n-- > 0&&scanf("%d %d",&height,&time) != EOF){
		while(time--){
			for(int i=1;i<=height;i++){
				for (int j=1;j<=i;j++){
					printf("%d",i);
					
				}printf("\n");
			}
			for(int i=height-1;i>0;i--){
				for(int j=1;j<=i;j++){
					printf("%d",i);
					
				}printf("\n");			
			}if(time)
			printf("\n");
		}if(n)
		printf("\n");
	}
}
