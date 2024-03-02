#include<stdio.h>
int main(){
    int n,i,r=0,a;
    n=a;
    printf("enter the number : ");
    scanf("%d",&n);
    while(n>0){
        i=n%10;
        r=r*10+i;
        n=n/10;
    }
    printf("%d",r);
    if(n==a)printf("number is parendrom");
    else if(printf("number is not parendrom"))
        

    return 0;
}