#include<stdio.h>
int main(){
    float principal,rate,time,si;
    printf("enter principal : ");
    scanf("%f",&principal);
    printf("enter the rate : ");
    scanf("%f",&rate);
    printf("enter time : ");
    scanf("%f",&time);
    si = ( principal*rate* time)/100;
    printf("youre simple interest is : %f",si);
    return 0;
}