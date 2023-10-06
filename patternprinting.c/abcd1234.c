#include<stdio.h>
int main(){
    int n,i;
    printf("enter the row ");
    scanf("%d",&n);
    
    for(int j=1;j<=n;j++){
        for( i=65;i<=j+64;i++){
            if(j%2==1)
               printf(" %d ",i-64);
            else{
                printf(" %c ",i);
            }   
            
        }
        printf("\n");
    }
    return 0;
}

