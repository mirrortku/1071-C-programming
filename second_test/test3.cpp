#include<stdio.h>
#include<ctype.h>

int checkSqrt(int n){
    int m;
    while(n>0){
        for(int m=1;m<n;m++){
            if(n/m==m)
            return m;
        }
        return 0;
    }
}

int main(){
    char cont='Y';
    int n,m;
    while(cont=='Y'){
        printf("Enter N:");
        scanf("%d",&n);
        if(checkSqrt(n))
            printf("Yes. %d = %d x %d\n",n,checkSqrt(n),checkSqrt(n));
        else
            printf("No.\n");


        printf("Continue (Y/N)? ");
        getchar();
        cont = toupper(getchar());
        printf("\n");
    }
    printf("Coding by 404416520");
    return 0;
}
