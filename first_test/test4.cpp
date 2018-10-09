#include<Stdio.h>

int encode(int n){
    int n1,n2,n3,n4,sum;
    n1=(n+5000)/1000;
    if(n1>10)
        n1=n1-10;
    n2=n%1000/100;
    n3=n%1000%100/10;
    n4=n%10;
    sum=n3*1000+n4*100+n1*10+n2;
    return sum;
}

int decode(int n){
    int n5,n6,n7,n8,sum;
    n5=n/1000;
    n6=n%1000/100;
    if(n%1000%100/10<5)
        n7 = (n%1000%100/10)+5;else
        n7 = (n%1000%100/10)-5;
    n8=n%10;
    sum=n7*1000+n8*100+n5*10+n6;
    return sum;
}

int main(){
    int n;
    printf("Enter N (-1 to exit) :");
    scanf("%4d",&n);
    printf("encode(%d) = %d\n",n,encode(n));
    printf("decode(%d) = %d\n",encode(n),decode(encode(n)));
    printf("Bye! Coding by 404416520");
    return 0;
}
