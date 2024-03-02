//find number of set of 3 element whose sum equal to given number p;

#include<stdio.h>
int main(){
    int p,i,j,k,count=0;
    scanf("%d",&p);
    int a[]={1,2,3,4,5,6,7,8,9};
    for(i=0;i<9;i++){
        for(j=i+1;j<9;j++){
            for(k=j+1;k<9;k++){
                if((a[i]+a[j]+a[k])==p){
                    count++;
                    printf("[%d%d%d]\n",i,j,k);
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}