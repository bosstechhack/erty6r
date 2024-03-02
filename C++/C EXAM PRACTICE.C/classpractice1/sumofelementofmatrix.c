#include<stdio.h>
int main(){
    int a[5][5];
    int i,j,sum=0;
    printf("Enter The number Of The Elements: ");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
             printf(" %d ",a[i][j]);
        }
        printf("\n");

    }
    printf("%dSum Of Element Of Matrix:",sum);
    return 0;
}