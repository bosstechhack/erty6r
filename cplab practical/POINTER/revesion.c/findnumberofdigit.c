#include<stdio.h>
int main(){
    int n,r,sum=0,rev=0,l=0;
    printf("enter the number:");
    scanf("%d",&n);
    int o=n;
    while(n>0){    
        r=n%10;
        rev=rev*10+r;
        sum=sum+r;
        n=n/10;
        l++;
    }
    int t=rev+o;
    printf("number of digits: %d\n",l);
    printf("sum of digits : %d\n",sum);
    printf("revers of the number: %d\n",rev);
    printf("sum of original and revers: %d\n",t);    
    return 0;
}