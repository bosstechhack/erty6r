#include<stdio.h>
int main(){
    int n,f=1;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("factorial is:");
    for(int i=n;i>=1;i--){
        f=f*i;   
    }
    printf("%d",f);
    return 0;
}