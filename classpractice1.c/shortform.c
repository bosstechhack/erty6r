#include<stdio.h>
int main(){
    char g;
    scanf("%c",&g);
    int e,q;
    scanf("%d %d",&e,&q);
    if(g == 'm'){
        if(e >= 10){
             if(q == 0) printf("10000");
             else if(q == 1)printf("15000");
        }
        else if(e < 10){
                 if(q == 0) printf("7000");
                 else if(q == 1) printf("10000");
        }
    }
    else if(g == 'f'){
            if(e >= 10){
                 if(q == 0) printf("9000");
                 else if(q == 1)printf("12000");
            }
            else if(e < 10){
                     if(q == 0) printf("6000");
                     else if(q == 1) printf("10000");
            }
    }         
    else{printf("Invalid input");} 
    return 0;           
}