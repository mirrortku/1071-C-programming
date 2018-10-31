#include<stdio.h>
#define MAX 50

int prsorting(int d[],int n){
    int num=0;

    for(int i=0;i<=n;i++)
    {

            d[num]=i;


    }
    return d[num];
}

int main(){
    int n,m=0;
    int d[MAX]={};
    int temp=0;
    int countnum = 0,countfailed=0,total = 0;
    printf("Enter a series of scores between 0~100(-1 to exit).\n");

    while(scanf("%d",&n)){
        if(n==-1)break;
        else{
            ++countnum;
            total += n;

            if(n<60){
                ++countfailed;
            }
            temp = prsorting(d,n);
            printf("Scores listing:\n");
            for(int i=0;i<temp;i++)
            {
                printf("%3d",d[i]);
            }
        }
    }
    temp = prsorting(d,n);
    printf("Scores listing:\n");
    for(int i=0;i<temp;i++)
        {
            printf("%3d",d[i]);
        }
    printf("\n");
    printf("The summary:\n");
    printf("NumberCount = %d\n",countnum);
    printf("FailedCount = %d\n",countfailed);
    printf("PassCount = %d\n",countnum-countfailed);
    printf("Average = %1f\n",(float)total/countnum);

    printf("coding by 404416520");
    return 0;
}
