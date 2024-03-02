//pair of sum in arrey is equal to given nuber is x;

#include<stdio.h>
#include<limits.h>
int main(){
    int max,smax,i;
    int n = 5,j,count=0;
    int a[6]={1,2,3,4,5,6};
    
        max=INT_MIN;
        smax=INT_MIN;
        for(i=0;i<6;i++){
          if(max<a[i]){
            smax=max;
            max =a[i];
          }
            
        
           
        }
    
    printf("%d",smax);
        
            
            
        
   

    return 0;
}
