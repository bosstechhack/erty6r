#include<stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i;// for last outcome print on terminal

    for(i = 1; i<=n; i++){
        printf("%d\n",i);
    }
    printf("%d",i);//for last outcome print on terminal
    return 0;
}