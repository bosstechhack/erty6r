#include<stdio.h>
int main(){
    int sum=0;
    int a[5]={1,4,6,3,7};
    for(int i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}