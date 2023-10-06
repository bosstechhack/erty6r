#include<stdio.h>
int main(){
    int a,b,i;
    printf("enter 1st & number of terms");
    int s = 0;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++){
        
        if(i%2!=0)
        s=s+i;
        else{
        s=s-i;
        }

    }
    printf("%d",s);
            

    return 0;
}