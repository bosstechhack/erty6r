//count number greater than a giiven number in arrey
#include<stdio.h>
int main(){
    int a[6]={1,7,8,4,6,3};
    int n=3;
    int i,count=0;
    for(int i=0; i<6;i++){
        if(a[i]>n){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}