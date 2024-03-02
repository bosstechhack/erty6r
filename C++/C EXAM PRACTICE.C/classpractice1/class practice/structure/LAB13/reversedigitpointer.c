#include<stdio.h>
int reverse(int *n){
    int rev=0;
    while(*n>0){
        int r=0;
        r=*n%10;
        rev=rev*10+r;
        *n=*n/10;
    }
return rev;
}
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int rev =reverse(&n);
    printf("reverse number: %d",rev);


    return 0;
}