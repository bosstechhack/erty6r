//reverse the array without use of another array
void rev(int a[]){
    int i=0;
    int j=6;
    while(i<j){
       int temp =a[i];
       a[i]=a[j];
       a[j]=temp;
       j--;
       i++;
    }
    return;
}
#include<stdio.h>
int main(){
    int a[7]={1,2,3,4,5,6,7};
    rev(a);
    for(int i=0;i<7;i++){
        printf("%d ",a[i]);
    }
    return 0;
}