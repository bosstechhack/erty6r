#include<stdio.h>
int main(){
    int b;
    printf("enter the basic pay: ");
    scanf("%d",&b);
    float DA = b*.80;
    float HRA = b*.30;
    float PF = b*.12;//deduction
    float salary = b+DA+HRA-PF;
    printf("%f",salary);
    return 0;
}