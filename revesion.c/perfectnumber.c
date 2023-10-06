#include<stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int o=n;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==o){
        printf("perfect  number:");
    }
    else if(sum!=o){
      printf("not perfect number");
    }

    return 0;
}