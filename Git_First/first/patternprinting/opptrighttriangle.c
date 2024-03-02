#include<stdio.h>
int main(){
    int n;
    printf("enter number of row");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            printf(" * ");
        }
        printf("\n");
    }
       
    return 0;
}