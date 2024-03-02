//pair of sum in arrey is equal to given nuber is x;

#include<stdio.h>
int main(){
    int n = 5,i,j,count=0;
    int a[6]={1,2,3,4,5,6};
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            
            if(a[i]+a[j]==n){
                count++;
                printf("(%d %d)\n",a[i],a[j]);
            }
        }
        
    }
    printf("%d",count);

    return 0;
}