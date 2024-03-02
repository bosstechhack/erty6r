//find the uniqe number in a given array

#include<stdio.h>
#include<stdbool.h>
int main(){
    int a[]={1,2,3,2,4,6,5,7,7,6,5};
    for(int  i=0;i<11;i++){
        bool flag = false;
        for(int j=i+1;j<11;j++){
            if(a[i]==a[j]){
                flag =true;
            }   
        }
        if(flag==false){
            printf("%d ",a[i]);//problem in this code is that it also count that element whhich present
            //in behind it but not after it
            
        }
    }
    return 0;

}