#include<stdio.h>
int main(){
    char g;
    int e, q;
    scanf("%c",&g);
    switch(g){
        case 'm':{
            scanf("%d",&e);
            if(e>=10){
                scanf("%d",&q);
                switch(q) {
                    case 0 :{
                       printf("10000");
                       break; 
                    }
                       
                    case 1 :{
                       printf("15000");
                        break;
                    }
                } 
            }    
            else if (e < 10) {
                scanf("%d",&q);
                switch(q) {
                    case 1 :{
                        printf("10000");
                        break;
                    }
                    case 0 :{
                        printf("7000");
                        break;
                    }
                }    
                
                
            }           
            break;        
        }
        case 'f':{
            scanf("%d", &e);
            if (e >= 10) {
                scanf("%d",&q);
                switch(q){
                    case 0: {
                       printf("9000");
                       break;
                    }
                    case 1 :{
                       printf("12000");
                       break;
                    }
                }
                
            }
            else if (e<10) {
                scanf("%d",&q);
                switch (q) {
                    case 1 :{
                        printf("10000");
                        break;
                    }
                    case 0 :{
                        printf("6000");
                        break;
                    }
                }    
                
            
            
        
            }
            break;        
        }
        default: {
            printf("Invalide input");
        }
   
    
    
    
    }    
    
    return 0;
}
