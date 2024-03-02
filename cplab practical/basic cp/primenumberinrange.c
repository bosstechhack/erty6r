#include<stdio.h>
int main(){
    int a,b;
    int x;
    printf("Enter range");
    scanf("%d %d",&a,&b);
    int i;
    
    for(x = a; x < b; x++){
        int isprime = 1;
        for(i=2;i<x;i++){

            if(x%i==0){
                isprime = 0;
                break;
            }
        }
        if(x==1) isprime = 0;
        if(isprime == 1) printf("%d\n",x);
            
        }
            
    return 0;
    
}