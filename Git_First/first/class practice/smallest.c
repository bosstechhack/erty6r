#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d" ,&a,&b,&c);
    if(a>b){
        if(b>c){
            printf("smallest %d",c);
        }
        else if(c>b){
            printf("smallest %d",b);
        }
        
    }
    else{
        printf("smallest %d",a);
    }
    return 0;
}