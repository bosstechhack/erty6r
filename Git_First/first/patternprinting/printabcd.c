#include<stdio.h>
int main(){
    int n;
    printf("enter the row ");
    scanf("%d",&n);
    int i;
    for(int j=1;j<=n;j++){
        for( i=65;i<=n+65;i++){
            printf("%c",i);
            
        }
        printf("\n");
    }
    return 0;
}
