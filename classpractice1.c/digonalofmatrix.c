#include<stdio.h>
int main(){
    int a[3][3];
    int i,j;
    printf("Enter The Element Of The Matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
          
        }
    }
    printf("Digonal Element Are:\n ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                printf(" %d ",a[i][j]);
            }
            else{printf("   ");
            }
        }
        printf("\n");
    }

    

    return 0;
}


