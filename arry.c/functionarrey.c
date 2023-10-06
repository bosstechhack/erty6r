#include<stdio.h>
void fun(int x[]){
int  temp=x[0];
x[0]=x[1];
x[1]=temp;

return;
}
int main(){
    int arr[2]= {6,9};
    printf("%d\n %d\n",arr[0],arr[1]);
    fun(arr);
   
    //int a =4;
    //fun(a);
    printf("%d\n %d\n",arr[0],arr[1]);

    return 0;
}