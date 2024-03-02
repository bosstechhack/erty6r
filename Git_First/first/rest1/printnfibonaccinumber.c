#include<stdio.h>
int main(){
    int a=1;
    int b=1;
    int n;
    printf("first n fiboacci number ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n-2;i++){
        
        

        sum=a+b;
        a=b;
        b=sum;
        printf("%d\n",sum);
        }
    
    return 0;
}