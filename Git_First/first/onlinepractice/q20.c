#include<stdio.h>

int main(){
    int s;
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    int *p=a;
    for(int i=s-1;i>=0;i--){
        printf("%d",p[i]);
    }
    
    return 0;
}