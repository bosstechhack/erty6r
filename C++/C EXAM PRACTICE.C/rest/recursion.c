#include<stdio.h>
int power(int n,int p){
    int po;
if(p==1){
    return n;
}
     po = n*power(n,p-1);
     
    return po;
}
int main(){
    int n,p;
    scanf("%d %d",&n,&p);
    power(n,p);
    printf("%d",power(n,p));
    return 0;
}