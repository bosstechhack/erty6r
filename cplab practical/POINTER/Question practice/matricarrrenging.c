#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf(" %d",&a[i][j]);
        }
    }
    printf("\n");
    
    
    int temp;
    for(int p=0;p<c;p++){
        for(int m=0;m<r;m++){
            for(int n=0;n<r;n++){
                if(a[m][p]>a[n][p]){
            temp=a[m][p];
            a[m][p]=a[n][p];
            a[n][p]=temp;
                 }
            }
       }  
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int p=0;p<c;p++){
        for(int m=0;m<r;m++){
            for(int n=0;n<r;n++){
                if(a[m][p]<a[n][p]){
            temp=a[m][p];
            a[m][p]=a[n][p];
            a[n][p]=temp;
        }
            }
        
       }
      
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}