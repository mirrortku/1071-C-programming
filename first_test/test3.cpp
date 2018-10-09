#include<stdio.h>

void prchar(char c,int n){
    for(int i=1;i<=n;i++)
        printf("%c",c);
}
int main(){
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
    printf("Bye! Coding by 404416520");
    return 0;
}
