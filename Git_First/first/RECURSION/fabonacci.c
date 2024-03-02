#include<stdio.h>
int fab(int n){
    if(n==2){return 1;}
    if(n==1){return 0;}
    return fab(n-1)+fab(n-2); 
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fab(n));
    return 0;
}