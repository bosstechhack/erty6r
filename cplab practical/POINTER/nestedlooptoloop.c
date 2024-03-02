#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);

    int a[r][c];
    int *p1=(int *)a;
    for(int i=0;i<(r*c);i++){
        scanf("%d",p1);
        p1++;

    }
    p1 =(int *)a;
    for(int i=0;i<(r*c);i++){
        printf("%d", *p1);
        p1++;

    }
    return 0;
}
