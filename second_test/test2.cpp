#include<stdio.h>
#include<ctype.h>

int prime(int n){
    while(n>0){
        if(n==1)
        return 0;
        else{
            for(int i=2;i<n;i++){
                if(n%i==0)
                return 0;
            }
        }

        return 1;
    }
}

int findprimes(int data[],int n1,int n2){
    int num=0;
    for(int i=n1;i<=n2;i++){
        if(prime(i)){
            data[num]=i;
            num++;
        }
    }
    return num;
}


int main(){
    char cont='Y';
    while(cont=='Y'){
        int n1,n2;
        int num=0;
        int data[]={};
        printf("Enter n1 and n2:");
        scanf("%d %d",&n1,&n2);
        num=findprimes(data,n1,n2);
        printf("%d primes between %d and %d.\n",num,n1,n2);
        for(int i=0;i<num;i++){
            printf("%3d",data[i]);
        }
        printf("\n");
        printf("Continue (Y/N)? ");
        getchar();
        cont = toupper(getchar());
        printf("\n");
    }
    printf("Coding by 404416520");
    return 0;
}
