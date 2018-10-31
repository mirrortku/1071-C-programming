#include<stdio.h>

int drawRect(int h,int w){
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            printf("*");

        }printf("\n");
    }
}

void prchar(char c,int n)
{
    for(int i=1; i<=n; i++)
        printf("%c",c);
}

int rdrawRect(int h,int w){
    if(h==0)
        return 0;
    rdrawRect(h-1,w);
    prchar('*',w);
    printf("\n");
}

int main(){
    int h,w;
    printf("Enter height:");
    scanf("%d",&h);
    printf("Enter width:");
    scanf("%d",&w);
    printf("\n\n");
    printf("Draw using iteration\n");
    drawRect(h,w);

    printf("Draw using recursion\n");
    rdrawRect(h,w);
    printf("coding by 40441520");
}
