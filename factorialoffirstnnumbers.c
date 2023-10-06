#include<stdio.h>
int main(){
    int n,f,i;
    printf("Enter number ");
    scanf("%d",&n);
    f=1;
    
    for(i=1;i<=n;i++){
        f=f*i;
        printf("factorial of %d %d\n ",i,f);
    }
    
        
        
    
        
    return 0;
    }