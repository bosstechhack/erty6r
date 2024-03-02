#include<stdio.h>
int main(){
    int c;
    printf("enter the cost price : ");
    scanf("%d",&c);

    printf("enter the price amount : ");
    int S;
    scanf("%d",&S);
    if(S>c){
        printf("Profit");
    }
    else if(S<c){
        printf("loss");
    }
    else{
        printf("no loss no profit");
        
    }
    return 0;
}