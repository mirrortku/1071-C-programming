#include<stdio.h>

int oddsum1(int n){
    if(n==1)
        return 1;
    else
        return oddsum1(n-1)+2*(n-1)+1;
}



int oddsum2(int n){
	
	if(n==1)
		return 1;
	else 
		return oddsum2(n-2)+n;
}



int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("oddsum1(%d) = %d\n",n,oddsum1(n));
    printf("oddsum2(%d) = %d\n",n,oddsum2(n));
    return 0;
}


/*
oddsum1(3) = 1+3+5+..+2n-1
*/
