#include<stdio.h>
int main(){
    int i,sum=0,a[5]={};
    printf("enter number\n: ");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
   
    printf("%dsum = ",sum);

    
    
    return 0;
}