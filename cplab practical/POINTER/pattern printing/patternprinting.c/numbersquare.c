#include<stdio.h>
int main(){
    int n;
    printf("enter a number of rows :");
    scanf("%d",&n);
    for (int i=1; i<=n;i++){// outer loop -> no of line
        for(int j=1; j<=n;j++){//innner loop -> no of stars in each line
           printf("%d",j);
        }
        printf("\n");
    }    
    return 0;
}