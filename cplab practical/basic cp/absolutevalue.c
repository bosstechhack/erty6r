#include<stdio.h>
int main(){
    int x;
    printf("enter a value : ");
    scanf("%d",&x);
    if(x<0){
        printf("Absolute value is : %d",-x);
        
    }
    else{
        printf("Absolute value is : %d",x);
    }
    return 0;
}