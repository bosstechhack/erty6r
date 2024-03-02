// fiind the difference betweenn the sum of even indices and odd indices

#include<stdio.h>
int main(){
    int a[10]={1,3,4,67,34,25,78,24,78,56};
    int i,sum=0,odd=0;
    for(i=0;i<10;i++){
        if(i%2==0){
            sum=sum+a[i];
        }
        else{odd=odd+a[i];}
    }
    printf("result:%d",sum-odd);


    return 0;
}