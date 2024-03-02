#include<stdio.h>
int main(){
    int i,j,t,c;
    printf("Enter The Number Of Row: ");
    scanf("%d",&t);
    for(i=0;i<=t;i++){
        int f=1;
        printf("%d",f);
       
        for (int k=0;k<=i;k++){
            
           printf("%d ",f);
           f=f*(i-j)/(j+1);
        }
        printf("\n");
        
        
    }
    




    return 0;
}
