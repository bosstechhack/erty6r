#include<stdio.h>
int main(){
    int x;
    printf("enter a digit");
    scanf("%d",&x);
    int i;
    int s=0;
    while(x!=0){
        i=x%10;
        x=x/10;
        
        s=s+i;

    
    
    }
    printf("%d",s);
    

    return 0;
}