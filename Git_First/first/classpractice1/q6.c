//Write a C program to read an m x n matrix and check whether the number of 0s is > (m * n) / 2.
// Check if the matrix is a sparse matrix.
#include<stdio.h>
int main(){
 
    int m,n;
    scanf(" %d %d ",&m,&n);
    int a[m][n];
    int b[n][m];
    int i,j,count=1;
    printf("Enter The Element Of First Matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf(" %d %d",&a[i][j]);
            
        }  
        printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==0)
            {
             count++;
            }            
        }   
    }
    if (count>(m*n)){
        printf("It is a Spare Matrix\n");
    }
    else{
        printf("It is not spare matrix\n");
    }
    return 0;
}