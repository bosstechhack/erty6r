#include<stdio.h>
int main(){
    int a,b,i,e=0,o=0;
    scanf("%d %d",&a,&b);
    printf("even number: ");
    for(i=a;i<=b;i++){
        if(i%2==0){   
            printf("%d ",i);
            e=e+i;
        }
    }
    printf("\n");
    printf("odd numbers: ");
    for(i=a;i<=b;i++){
        if(i%2==1){
            printf("%d ",i);
            o=o+i;
            }
    }
    printf("\n");
    printf("sumof even:%d\n",e);
    printf("sum of odd:%d\n",o);
    return 0;
}