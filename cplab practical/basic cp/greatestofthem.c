#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter number a : ");
    scanf("%d",&a);
    printf("enter number b : ");
    scanf("%d",&b);
    printf("enter number c : ");
    scanf("%d",&c);

    if(a>b && b>c){
        printf("greatest of three : %d",a);

    }
    if(a<b && b<c){
        printf("greatest  of three :%d",c);
    }
    else{
        printf("greatest  of three %d",b);

    }
    return 0;
}