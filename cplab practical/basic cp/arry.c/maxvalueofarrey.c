#include<stdio.h>
#include<limits.h>
int main(){
    
    int a[5]={1,4,6,3,7};
    int max=a[0];
    //int max = INT_MIN;//SABSE CHHOTA NUMBER
    for(int i=0;i<5;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("%d",max);
        
    
   
    return 0;
}