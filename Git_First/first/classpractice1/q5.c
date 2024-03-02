//transpose of matrix// also check when row!=column
#include<stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n];
    int b[n][m];
    int i,j;
    printf("Enter The Element Of First Matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            b[j][i] =a[i][j];
        }
    }
     printf("original matrix is this\n");
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose matrix is this\n");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    



    return 0;
}