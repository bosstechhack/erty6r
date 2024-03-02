#include<stdio.h>
int main(){
    int n,i,a=0,b=1,sum=0;
    printf("enter number of terms :");
    scanf("%d",&n);
    printf("0 1");
    
    for( i=1;i<=n;i++){
        
        
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);

    }
    return 0;
}