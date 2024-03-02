#include<stdio.h>


int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){

      int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int i,j,t,c;
    printf("Enter The Number Of Row: ");
    scanf("%d",&t);
    for(i=0;i<=t;i++){
        for(j=0;j<t-i;j++){
            printf(" ");
        }
       
        for (int k=0;k<=i;k++){
            int icj=combination(i,k);
           printf("%d ",icj);
        }
        printf("\n");
        
        
    }
    




    return 0;
}
