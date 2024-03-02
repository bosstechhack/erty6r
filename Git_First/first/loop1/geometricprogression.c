#include<stdio.h>
int main(){
    int i,n;
    float r;
    int a;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("common term :");
    scanf("%f",&r);
    
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
         printf("%d ",a);
         a=a*r;

    }
    
    return 0;   
    }
    
