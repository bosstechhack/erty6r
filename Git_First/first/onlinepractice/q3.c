//arrenge the gi
#include<stdio.h>


int main(){
    int s,k,c,C,n,temp;
    printf("Enter the size of matrix row and column\n");

    scanf("%d %d",&s,&k);
    int a[s][k];
    printf("Enter the element of matrix\n");
    for(int i=0;i<s;i++){
        for(int j=0;j<k;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("New Matrix\n");
    for(int i=0;i<s;i++){
        for(int j=0;j<k;j++){
            for(int m=j+1;m<k;m++){
                 if(a[i][j]>a[i][m]){
                 temp=a[i][m];
                 a[i][m]=a[i][j];
                 a[i][j]=temp;
            
            
                } 
                }
           printf("%d ",a[i][j]);
           
        }
        printf("\n");
    }
    return 0;
}
    