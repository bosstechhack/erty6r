#include<stdio.h>
int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
   
    int i,a;
    for(i=2; i<n ;i++){
        if(n%i==0){
            a=1;
            break;
        }

    }
    if(a!=1){printf("prime");}
    else{printf("not prime");} 
    
    return 0; 
}    
    
    
           
            
       
             
   
    
    
   
