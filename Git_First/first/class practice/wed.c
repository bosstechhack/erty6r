#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    switch(num){
        case 7:
        printf("value is 7");
        break;
        case 8:
        printf("value is 8");
        break;
        case 9:
        printf("value is 9");
        break;
        default:
        printf("out of range");
        break;
    }
    
    
    return 0;
}