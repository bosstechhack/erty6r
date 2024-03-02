#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter first number");
    scanf("%d",&b);
    printf("enter first number");
    scanf("%d",&c);
    if(a>b){
        if(a>c)
        printf("%d is gratest",a);
        else{
            printf("%d greatest is",b);
        }

    }
    else{
        printf("%d greatest",c);
    }
    return 0;

}
