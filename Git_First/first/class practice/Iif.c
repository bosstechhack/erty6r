#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    if(a>b)
       printf("greater number is %d",a);
    else if(b>a)
            printf("greater number is %d",b);
    else{
        printf("both are equals");
    }
}