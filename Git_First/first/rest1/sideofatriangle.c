#include<stdio.h>
int main(){
    int a,b,c;
    printf("first number :");
    scanf("%d",&a);
    printf("second number :");
    scanf("%d",&b);
    printf("third number :");
    scanf("%d",&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("triangle exist");
    }
    else{
        printf("tringle not");
    }
    return 0;
}