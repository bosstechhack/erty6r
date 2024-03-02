#include<stdio.h>
int digit(int n){
    int sum=0,r;
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",digit(n));

    return 0;
}