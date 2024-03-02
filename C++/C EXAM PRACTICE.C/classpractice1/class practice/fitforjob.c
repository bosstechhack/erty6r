#include<stdio.h>
int main(){
    int a,m,f,M;
    printf("enter the age of person : ");
    scanf("%d",&a);
    if(a<18)
       printf("you are miner, not fit for job");
    else if(a>=18 & a<60)
            printf("fit for work");   
    else{
        printf(" you are major, not fit for job ");
    }


    return 0;
}