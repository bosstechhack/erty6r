#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    printf("enter the third number");
    scanf("%d",&c);
    if ((a >= b && a <= c) || (a >= c && a <= b)) {
        printf("Second largest number is %d", a);
    } else if ((b >= a && b <= c) || (b >= c && b <= a)) {
        printf("Second largest number is %d", b);
    } else {
        printf("Second largest number is %d", c);
    }

    return 0;
}

