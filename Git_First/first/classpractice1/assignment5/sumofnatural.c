#include<stdio.h>
 int sum(int n){
    if(n==1){return 1;}
     int total;
 return total=n+sum(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("Enter the sum of 1st n natural numbers\n");
    printf("%d",sum(n));
    return 0;
}