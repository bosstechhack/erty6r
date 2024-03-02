#include<stdio.h>
 long long maze(int n,int m,int k,int l){
 int rightways=0;
 int downways=0;
 if(n==k&&m==l){
    return 0;
 }
 if(n==k){
    rightways+=maze(n,m+1,k,l);
 }
 if(m==l){
    downways+=maze(n+1,m,k,l);
 }
 if(n<=k&&m<=l){
    int riightway=maze(n,m+1,k,l)+maze(n+1,m,k,l);
 }

}
int main(){
    int n,m,k,l;
    scanf("%d%d",&k,&l);
     printf("%d",maze(1,1,k,l));
    return 0;
}