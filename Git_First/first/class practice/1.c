#include<stdio.h>
int main (){
    int a,b,c;
    a=4;
    b=2;
    c=-a+--b;//pre decrement
    printf("c=%d ",c);
    printf("b=%d ",b);
    return 0;
}