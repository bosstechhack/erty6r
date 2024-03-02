#include<stdio.h>
int main(){
    int original;
    int x=original;
    int l;
    int k;
    int count =0;
    int product;
    int sum =0;
    scanf("%d",&x);
    original=x;
    while(x!=0){
       count++;
       x=x/10;
    }
     x=original;
    while(x!=0){
      k = x%10;
      product = 1;
      for(int p =1;p<=count;p++){
        product = product*k;
      }
         sum = sum +product;
         x=x/10;
      
    }
    if(sum == original){
        printf("given number is amstrong number");
    }
    else{
        printf("given number is not amstrong number");
    }
    return 0;
}