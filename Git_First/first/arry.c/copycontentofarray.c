//copy the content of one arraty into another in reverse order
#include<stdio.h>
#include<limits.h>
int main(){
    int a[6]={3,6,4,1,8,7};
    int b[6],i,max;
    for(i=0;i<6;i++){
        max=INT_MIN;
        if(max<a[i]){
            max=a[i];
           
        }
        
    }
    for(i=0;i>6;i++){
        printf("%d",b[i]);
    }

    return 0;
}