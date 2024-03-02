#include<stdio.h>
int main(){
    int a=100,b=150,c=200,d=400;
    int p,q,h;
    scanf("%d",&h);
    int r=h*a;
    int R=h*b;
    if(h<=5){
        printf("men%d women%d",r,R);
    }
    else{
        printf("men%d women%d",p=a*5+(h-5)*c,q=b*5+(h-5)*d);
    }
    

    return 0;
}