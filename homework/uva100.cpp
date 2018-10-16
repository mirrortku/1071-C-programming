#include<stdio.h>

int main(){
    int a,b;
    int start,ending;
    int Max=0;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a<b){
            start = a;
            ending = b;
        }else{
            start =b;
            ending =a;
        }
        for(int i=start;i<=ending;i++){

            int k=i,lengh=1;

            while(k!=1){
                if(k%2==0){
                    k = k/2;
                }else{
                    k = 3*k+1;
                }
                lengh++;
            }
            if(lengh>Max){
            Max = lengh;
            }
        }

        printf("%d %d %d \n", a, b, Max);
    }

    return 0;


}
