#include<stdio.h>
int main(){
    int i,j;
    int mark[10]={12,45,34,67,53,45,23,32,78,91,12,34,56};
    printf("Enter the marks obtained\n");
    for(i=0;i<10;i++){
        
        if(mark[i]<35){
            
            printf("roll number is:%d\n",i);
        }
    }
    
    return 0;
}