#include<stdio.h>
int main(){
    int n,i,p;
    printf("enter the number ");
    scanf("%d",&n);
    
    for(i=1;i<=10;i++){
        printf("%d",n);
        printf("*");
        printf("%d",i);
        printf("=");
        printf("%d",p=n*i);
        printf("\n");
    }
    return 0;
}