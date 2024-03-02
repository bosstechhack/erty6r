#include<stdio.h>
int main(){
    int n,c;
    printf("enter number of computer n : ");
    scanf("%d",&n);
    printf("enter cost per computer 'c':");
    scanf("%d",&c);
    int t,C;
    printf("number of table t : ");
    scanf("%d",&t);
    printf("number of chair C : ");
    scanf("%d",&C);
    int p,q; 
    printf("enter the cost of one table p :");
    scanf("%d",&p);
    printf("enter the cost of one chair q :");
    scanf("%d",&q);
    int l,w;
    printf("labour cost l :");
    scanf("%d",&l);
    printf("number of hours work w :");
    scanf("%d",&w);
    int totalcost=(n*c+t*p+C*q+l*w);
    printf("%d",totalcost);


    return 0;
}