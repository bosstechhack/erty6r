#include<stdio.h>
int main(){
    int a,b;
    printf("enter the range: ");
    scanf("%d %d",&a,&b);
    int i;
    for(i=a+1;i<b;i++){
        
        if(i%2==0){
            
            
            continue;

        }
        printf(" %d ",i);
        }
        
    return 0;
}