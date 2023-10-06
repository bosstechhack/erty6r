#include<stdio.h>
int main(){
    int i,a,d,n;
    printf("Enter first term : ");
    scanf("%d",&a);
    printf("Enter common difference : ");
    scanf("%d",&d);
    printf("Enter number of terms : ");
    scanf("%d",&n);
    for(i=1; i<=n ;i++){
        printf("%d ",a);
        a=a+d;
    }
    return 0;
}