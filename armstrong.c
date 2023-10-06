#include<stdio.h>
int main(){
    int b,i;
    
    for(i=1;i<=500;i++){
        for(b=1;b<=6;b++){
            b=b*b*b;
            int a=0;
            a=a+b;
            if(i%a!=1){
            printf("%d\n",i);
            }
            break;
            
            
        }
        

    }
    return 0;
}