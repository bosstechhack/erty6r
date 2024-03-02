//multiplication of  two matrix
#include<stdio.h>
int main(){
    int s,k,c ,d;
    scanf("%d%d",&s,&k);
    scanf("%d%d",&c,&d);
    int a[s][k];
    int b[c][d];
    int f[s][d];
if(k!=c){
    printf("multiplecation is not possible");
    return 0;
}

    
    printf("Enter the element of 'a' matrix\n");
    for(int i=0;i<s;i++){
        for(int j=0;j<k;j++){
            scanf("%d",&a[i][j]);         
        }
    }
    printf("Enter the matrix of 'b' matrix\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            scanf("%d",&b[i][j]);;         
        }
    }
    int sum,l,t;
    for(int i=0;i<s;i++){
        for(int j=0;j<d;j++){
             sum = 0;
           for(int m=0;m<d;m++){
            
           sum+=a[i][m] * b[m][j];

           
           
           }
           f[i][j]=sum;
          
                 
        }
        
        
    }
    for(int i=0;i<d;i++){
        for(int j=0;j<s;j++){
            printf("%d ",f[i][j]);         
        } 
        printf("\n");
    }
}