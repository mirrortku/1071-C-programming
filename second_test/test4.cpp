#include<stdio.h> 
#define MAX 100

int prchar(char c,int n){
	for(int i=1;i<=n;i++){
		printf("%c",c);
	}
	printf("\n");
}

int prArr(int data[],int n){
	for(int i=0;i<n;i++){
		printf("%3d",data[i]);
		if((i+1)%10 == 0)
			printf("\n");
	}
	printf("\n");
}

int main(){
	int n;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;
	int passcount=0,failcount=0,count=0;
	int data[100];
	int sum=0;
	printf("Enter a series between 0~100(-1 to exit).\n");
	scanf("%d",&n);
	while(n!=-1){
		if(n==100){
			a++;
			passcount++;	
		}
		else if(n>=90){
			b++;
			passcount++;
		}
		else if(n>=80){
			c++;
			passcount++;
		}
		else if(n>=70){
			d++;
			passcount++;
		}
		else if(n>=60){
			e++;
			passcount++;
		}
		else{
			f++;
			failcount++;
		}
		data[count++]=n;
		sum+=n;
		scanf("%d",&n);
	}
	printf("\n");
	printf("Scores listing:\n");
	prArr(data,count);
	printf("\n");
	printf("The summary\n");
	printf("NumberCount = %d\n",count);
	printf("FailedCount = %d\n",failcount);
	printf("PassCount = %d\n",passcount);
	printf("Average = %.1f\n\n",(float)sum/count);
	printf("100\t%d",a);
	prchar('*',a);
	printf("90~99\t%d ",b);
	prchar('*',b);
	printf("80~89\t%d ",c);
	prchar('*',c);
	printf("70~79\t%d ",d);
	prchar('*',d);
	printf("60~69\t%d ",e);
	prchar('*',e);
	printf("0~59\t%d ",f);
	prchar('*',f);
	printf("\n\n\nCoding by 404416520");
	return 0;
}
