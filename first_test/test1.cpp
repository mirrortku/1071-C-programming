#include<stdio.h>

int main(){
    int n1,n2,n3,n4,n5,n6,n7;
    printf("Enter two integers:");
    scanf("%d %d",&n1,&n2);
    n3 = n1+n2;
    n4 = n1-n2;
    n5 = n1*n2;
    n6 = n1/n2;
    n7 = n1%n2;

    printf("%d + %d = %d\n",n1,n2,n3);
    printf("%d - %d = %d\n",n1,n2,n4);
    printf("%d * %d = %d\n",n1,n2,n5);
    printf("%d / %d = %d\n",n1,n2,n6);
    printf("%d %c %d = %d\n",n1,'%',n2,n7);

    printf("Bye! Coding by 404416520");
    return 0;
}
