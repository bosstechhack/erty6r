//multiplcation of two numbers
#include<stdio.h>
int main(){
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int a[m][n];
    int b[m][n];
    int c[m][n];
 printf("Enter The Element Of First Matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            
        }
        
    }    
printf("Enter The Element Of Second Matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            
        }

    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]*b[j][i];
            
        }

    }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",c[i][j]);
            
        }
        printf("\n");

    }
    return 0;    
}
