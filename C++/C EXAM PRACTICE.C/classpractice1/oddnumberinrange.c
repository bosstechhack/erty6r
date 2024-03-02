#include<stdio.h>
int main(){
    int a,b,i;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("odd numbers are");
    for(i=a;i<=b;i++){
        if(i%2==1){
            printf(" %d ",i);
        }
    }
    return 0;
}