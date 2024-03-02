#include<stdio.h>
int main(){
    int p,b,i,r=1;
    printf("Base: ");
    scanf("%d",&b);
    printf("power: ");
    scanf("%d",&p);
    for(i=1;i<=p;i++){
        r=r*b;

    }
    printf("%d",r);

    return 0;

}
