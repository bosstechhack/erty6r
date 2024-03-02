#include<stdio.h>
int main(){
    int n,i;
    printf("enter the row ");
    scanf("%d",&n);
    
    for(int j=0;j<=n-1;j++){
        for( i=65;i<=j+65;i++){
            printf("%c",i);
            
        }
        printf("\n");
    }
    return 0;
}
