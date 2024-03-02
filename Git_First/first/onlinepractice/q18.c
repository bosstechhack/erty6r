#include<stdio.h>
int* returnp(int []);
int main(){
    int a[]={1,100,3,4,5};
    int *p;
    p=returnp(a);
    printf("%d",*p);
    return 0;

}
int* returnp(int a[]){
    a=a+1;
    return a;
} 