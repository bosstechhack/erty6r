#include<stdio.h>
float cashback(int n){
    float cashinhand;

    if(n<5000){
        cashinhand=n * .05;
        
    }
    else if(n>5000){
        cashinhand= n *.07;
    }
    return cashinhand;
}
int main(){
    int amount;
    printf("Enter thr amount: ");
    scanf("%d",&amount);
      cashback(amount);
    printf("Amount as cashback is: %g ",cashback(amount));

    return 0;
}
    
