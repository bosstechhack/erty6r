#include<stdio.h>
long long int fac(int n){
if(n==0||n==1){return 1;}    
return n*fac(n-1);
}


int main(){
    
    int n;
    scanf("%d",&n);
    
    printf("%lld",fac(n));
    return 0;
}