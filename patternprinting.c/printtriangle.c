#include<stdio.h>
int main(){
    int n;
    printf("enter number of row");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
             printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){ 
             printf("*");
        }
        //for(int l=1;l<=i-1;l++)
          //   printf("*");
        printf("\n");
        
        
       
    }
    
       
    return 0;
}