#include<stdio.h>
int main(){
    int a[2][3],b[2][3],sub[2][3];
    int i,j;
    printf("element of 1 matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("element of 2 matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Subtration Of Matrix Is\n");
    
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            sub[i][j] = a[i][j]-b[i][j];
        }
    }
    printf("sub of matrix is\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf(" %d ",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}