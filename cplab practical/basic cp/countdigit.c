#include<stdio.h>
int main(){
    int x,i;
    printf("enter a number ");
    scanf("%d",&x);
    i=0;
    while(x!=0){
        x = x/10;
        i++;
    }
    
    printf("%d",i);


    return 0;
}