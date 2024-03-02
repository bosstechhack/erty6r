#include<stdio.h>
int main(){
    int a[3][3],b[3][3],mul[3][3];
    int i,j;
    printf("Enter The Element Of First Matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Elemesnt of Second matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           mul[i][j]=((a[i][j])*(b[i][j]));
        }
    }
    
    printf("Multiplication Of Two Matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d ",mul[i][j]);
        }
        printf("\n");
    }



    return 0;
}