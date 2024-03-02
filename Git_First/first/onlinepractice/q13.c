
#include<stdio.h>
#include<string.h>
int main(){
    int s;
    scanf("\n%d",&s);
    
    char b[s];
     char c[s*s];
    // char a[s*s];
     char d[s]; 
    scanf(" %[^\n]", b);
    for(int i = 0 ; i < s; i++){
      // b[i]=a[i];
       c[i] = b[i];
    }
   
    
    char temp;
    
    for(int i = 0, m = s; i < s; i++,m += s){
         
        for(int j = 0,k = 1;j < s-1,k < s; j++,k++){
            temp=b[j];
            b[j]=b[k];
            b[k]=temp;
            c[m+j]=b[j];
            c[m+s-1]=temp;
               
        }
        
    }
    for(int i=0; i<s*s;i++){
        if(i%s==0){
            printf(" ");
        }
        printf("%c",c[i]);
    }
   
    return 0;
}