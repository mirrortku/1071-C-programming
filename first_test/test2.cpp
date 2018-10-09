#include<stdio.h>

int main(){
    int a,b;
    printf("Enter height (-1 to Exit): ");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        printf("%d cm: %.1f ~ %.1f (kg)",i,(18.5*i/100*i/100),(24.0*i/100*i/100));
        printf("\n");
    }
    printf("Bye! Coding by 404416520");
    return 0;
}
