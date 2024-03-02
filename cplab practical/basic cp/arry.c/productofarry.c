#include<stdio.h>
int main(){
    int pro=1;
    int a[5]={1,4,6,3,7};
    for(int i=0;i<5;i++){
        pro=pro*a[i];
    }
    printf("%d",pro);
    return 0;
}