#include<stdio.h>
int main(){
    int n;
    printf("enter a number of rows :");
    scanf("%d",&n);
    int m;
    printf("enter number of columnss : ");
    scanf("%d",&m);
    for (int i=1; i<=n;i++){// outer loop -> no of line
        for(int j=1; j<=m;j++){//innner loop -> no of stars in each line
           printf("*");
        }   
        printf("\n");//har line ke baad ek enter marna 
        
    }
    return 0;
}
