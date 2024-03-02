#include<stdio.h>
int main(){
    int p;
    printf("enter percentage : ");
    scanf("%d",&p);
    if(p>90){
    printf("gread A");
    }
    else{
        if(p>80){
            printf("gread B");
            }else{
                if(p>70){
                    printf("gread C");
                    }else{
                        printf("gread D");
                    }
                
            
            }    
    }  
    
    

    return 0;

    
}