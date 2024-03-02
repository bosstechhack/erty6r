
#include<stdio.h>
int factorial(int n){
   int fact=1;
    for(int i=n;i>0;i--){
      fact=fact*i;
    }

    
    return fact;
}
int main(){
   int n;
   scanf("%d",&n);
   int sum=0;
   
   while(n>0){
    int fact=factorial(n);
    sum=sum+fact/n;
    n--;

   }
   printf("%d",sum);
   return 0;  
}