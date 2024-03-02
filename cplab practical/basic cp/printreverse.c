#include<stdio.h>
int main(){
    int x,i,r,s;
    printf("enter a number");
    scanf("%d",&x);
    
    r=0;
    while(x>0){
        r=r*10;
        r=r+(x%10);
      
        x= x/10;        

    }

    printf("%d",r);
    return 0;
}