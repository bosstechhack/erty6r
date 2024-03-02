#include<stdio.h>
int main(){
    int n;
    printf("enter numer");
    scanf("%d",&n);
    
    if(n>99 && n<1000){
        printf("three digit number");

    }
    else{
        printf("not 3 digit number"); 
    }
    return 0;
}