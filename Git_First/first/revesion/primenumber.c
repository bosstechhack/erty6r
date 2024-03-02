#include <stdio.h>
int main(){
    int a,b,count;
    scanf("%d %d",&a,&b);
    for(int i = a;i<=b;i++){
        count=0;
        for(int j=2;j<i;j++){
            if(i%j == 0){
                count=1;
                break;
            }
        }
        if(count == 0 && a!=1){
            printf("%d ",i);
        }
    }
    return 0;
}