#include<Stdio.h>
int encode(int n);
void prchar(char c,int n);
int decode(int n);

int main(){
    while(1){

    int choice=0;
    printf("(1) Arithmetic Computation\n");
    printf("(2) List BMI ranges\n");
    printf("(3) Draw Four Vertical Triangles\n");
    printf("(4) encode(n)\n");
    printf("(5) decode(n)\n");
    printf("(6) Exit\n");
    printf("=>");
    scanf("%d",&choice);
    if(choice==6)break;

        switch(choice){

        case 1:
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
    break;
        case 2:
            int a,b;
    printf("Enter height (-1 to Exit): ");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        printf("%d cm: %.1f ~ %.1f (kg)",i,(18.5*i/100*i/100),(24.0*i/100*i/100));
        printf("\n");
    }
    break;
        case 3:
    int height;
    printf("Enter height (-1 to exit): ");
    scanf("%d",&height);
    for(int i=1;i<=height;i++){
        prchar(' ',height-i);
        prchar('*',i);
        printf(" ");
        prchar('*',i);
        prchar(' ',height-i);
        printf("\n");
    }
    break;
        case 4:
            int n;
    printf("Enter N (-1 to exit) :");
    scanf("%4d",&n);
    printf("encode(%d) = %d\n",n,encode(n));
    break;
        case 5:
            int m;
    printf("Enter M (-1 to exit) :");
    scanf("%4d",&m);
    printf("decode(%d) = %d\n",n,decode(m));
    break;
        }
    }
    printf("Bye! Coding by 404416520");
}

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
        n7 = (n%1000%100/10)+5;
    else
        n7 = (n%1000%100/10)-5;
    n8=n%10;
    sum=n7*1000+n8*100+n5*10+n6;
    return sum;
}

void prchar(char c,int n){
    for(int i=1;i<=n;i++)
        printf("%c",c);
}
