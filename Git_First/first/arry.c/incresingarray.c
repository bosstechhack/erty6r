//arrenge the given array into increasing or decreasing order
#include<stdio.h>
#include<string.h>

int main(){
    int i,j,temp;
    int a[]={4,6,8,2,41,7,1,9};
    for(i=0;i<8;i++){
        for(j=i+1;j<8;j++){
             if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
                
             }
        }
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<8;i++){
        for(j=i+1;j<8;j++){
             if(a[i]<a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                
                
             }
        }
        printf("%d ",a[i]);
    }
    return 0;
}

