#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int *p=&n;
    int fact=1;
    for(int i=*p;i>=1;i--){
        fact=fact*i;
    }
    printf("factorial of the number is: %d",fact);
    return 0;
}