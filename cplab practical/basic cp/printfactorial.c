#include<stdio.h>
int main(){
    int n,f,i;
    printf("Enter factorial ");
    scanf("%d",&n);
    f=1;
    
    for(i=1;i<=n;i++){
        f=f*i;
        
        
    }
    printf("%d",f);

    return 0;
}