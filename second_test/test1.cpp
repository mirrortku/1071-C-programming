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

int main(){
    int n;
    char cont = 'Y';

    while(cont=='Y'){
        printf("Enter N: ");
        scanf("%d",&n);
        if(prime(n))
        printf("%d is a prime\n",n);
        else
        printf("%d is not a prime\n",n);

        printf("Continue (Y/N)? ");
        getchar();
        cont = toupper(getchar());
        printf("\n");
    }
    printf("Coding by 404416520");


    return 0;
}
