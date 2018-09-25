#include<stdio.h>

int main(){
	float m,kg;
	float bmi;
	printf("身高(m):");
	scanf("%f",&m);
	printf("體重(kg):");
	scanf("%f",&kg);
	bmi=kg/(m*m);
	while(bmi>=0){
		if(bmi<24){
		printf("正常範圍");	
		}
		else if(24<=bmi<27){
		printf("過重");			
		}
		else if(27<=bmi<30){
		printf("輕度肥胖");
		}
		else if(30<=bmi<35){
		printf("中度肥胖");			
		}
		else if(35<=bmi){
		printf("重度肥胖");			
		}
		else{
		printf("體重過輕");			
		}
	break;
	}

}
