#include<stdio.h>
int main(){
    float l,b;
    printf("length : ");
    
    scanf("%f %f",&l,&b);
    
    float a = l*b;
    float p = 2*(l + b);
    if(a>p){
        printf("area greater");
        
    }
    if(a==p){
        printf("equal");


    }
    if (a<p)printf("perimeter greater");




    

    return 0;
    }



