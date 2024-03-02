///arrange the aarry number in the increasing and decreasing order
#include<stdio.h>
int main(){

   int n=7;
int a[7]={3,9,7,2,5,4,8};
int i,j,b;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            b=a[i];
            a[i]=a[j];
            a[j]=b;
            
        }
    }

}
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");



return 0;
}