//change the value of odd indexed element to its second mutiple and increment all even indexed value by 10.
#include<stdio.h>



int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    for(int i=0;i<10;i++){
        if(i%2!=0){;
          a[i]=a[i]*2;
        }
        else if(i%2==0){
            a[i]=a[i]+10;
        }
    }
        for(int i=0;i<10;i++){
        printf("%d ",a[i]);
        }
    
    return 0;
}