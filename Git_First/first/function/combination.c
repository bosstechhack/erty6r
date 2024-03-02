#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n,r;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Enter The r: \n");
    scanf("%d",&r);
    
   /*int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(n-r);*/
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("valu of ncr is: %d",ncr);


    return 0;
}