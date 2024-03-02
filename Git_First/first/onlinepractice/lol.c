#include<stdio.h>
int add(int *a){
    for(int i=0;i<5;i++){
        a[i]=a[i]+1;
    }
return *a;    
}



int main(){
    int a[]={1,3,4,5,6};
    int *p=a;
    add(p);
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;

}