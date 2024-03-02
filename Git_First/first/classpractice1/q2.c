//aaddition of two array
#include<stdio.h>
#include<string.h>
int main(){
    int i;
   int a[5]={1,2,3,4,5};
   int b[5]={0,9,8,7,6};
   int c[5];
   
   for(i=0;i<5;i++){
     c[i]=a[i]+b[i];
     
   }
   for(i=0;i<5;i++){
    printf("%d ",c[i]);
   }

return 0;
}