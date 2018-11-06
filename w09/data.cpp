#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

struct Data{
    int year;
    int month;
    int day;
};


struct Lotto{
    Data date;
    int num[6];
};

int pro(int num[],int pos){
    for(int i=0;i<pos;i++){
        if(num[i]==num[pos])
            return 0;
        else
            return 1;
    }
}

int main(){
    Lotto lotto[MAX];
    Lotto num[MAX];
    srand(time(NULL));
    int n;
    int temp;
    printf("Enter N:");
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++){

        lotto[i].date.year=rand()%11+2010;
        lotto[i].date.month=rand()%12+1;
        lotto[i].date.day=rand()%31+1;

        printf("%d/%02d/%02d  ",lotto[i].date.year,lotto[i].date.month,lotto[i].date.day);

        for(int j=0;j<6;j++){

            lotto[i].num[j] =  rand()%49+1;


            printf("%3d",lotto[i].num[j]);
        }

        printf("\n");
    }

}
