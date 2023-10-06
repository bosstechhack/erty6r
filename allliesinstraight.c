#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("1 point : ");
    scanf("%d %d",&a,&b);
    printf("2 point : ");
    scanf("%d %d",&c,&d);
    printf("3 point : ");
    scanf("%d %d",&e,&f);
    int m1 = c-a/d-b;
    int m2 = e-a/f-b;
    if(m1 == m2){
        printf("lies in straight line");

    }
    else{
        printf("not lies in same line");
    }
    return 0;
}