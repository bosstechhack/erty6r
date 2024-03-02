#include<stdio.h>
int main(){
    int s;//how to find wrong input
    scanf(" %d", &s);
    char c[s];
    for( int i = 0;i < s; i++){
        c[i]= 'A' + i;
    }
    char a[s][s];
    //int b[s][s];
   
    for(int i = 0; i < s; i++){ 
        int count = 0;  
        for(int j = 0; j < s; j++){
            scanf(" %c", &a[i][j]);
                for(int k = 0;k < s; k++){
                    if(a[i][j] == c[k]){
                    count++;
                    
                    
                    }
                }
        }
        if(count != s ) {
        printf("wrong input");
        return 0;
        }    
    }
    int t=0;
    for(int i=65;i<s+65;i++){
        t= t+i;
    }
    
    for(int i = 0; i < s; i++){ 
         int count=0;
        for(int j = 0;j < s; j++){
            for(int m=0;m<s;m++){
            if(c[m]==a[i][j]){
                count+=a[i][j];
            }
            }
        }
       
        if(count != t){
            printf("not latin square");
            return 0;
        }
    }
    for(int i = 0; i < s; i++){ 
         int count=0;
        for(int j = 0;j < s; j++){
           
            for(int m=0;m<s;m++){
            if(c[m]==a[j][i]){
                count+=a[j][i];
            }
            }
        }
        
        
        if(count != t){
            printf("\nnot latin square");
            return 0;
        }
    }
    printf("latin square");


return 0;
}