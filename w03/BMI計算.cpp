#include<stdio.h>

int main(){
	float m,kg;
	float bmi;
	printf("����(m):");
	scanf("%f",&m);
	printf("�魫(kg):");
	scanf("%f",&kg);
	bmi=kg/(m*m);
	while(bmi>=0){
		if(bmi<24){
		printf("���`�d��");	
		}
		else if(24<=bmi<27){
		printf("�L��");			
		}
		else if(27<=bmi<30){
		printf("���תέD");
		}
		else if(30<=bmi<35){
		printf("���תέD");			
		}
		else if(35<=bmi){
		printf("���תέD");			
		}
		else{
		printf("�魫�L��");			
		}
	break;
	}

}
