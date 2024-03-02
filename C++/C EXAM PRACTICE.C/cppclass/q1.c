#include<stdio.h>
#include<string.h>

int main(){
    char a[1000];
    int b[1000];
    gets(a);
    int i=0;
    i=0;
    while(a[i]!='\0'){
        if(b[0]>=97&& b[0]<=122){
            b[0]=b[0]-32;
        }
        
    while(a[i]==' '){
      if(a[i+1]>=97 && a[i+1]<=122){
        a[i+1]=a[i+1]-32;  
      }
      i++;
    }
    i++;
    }
    i=0;
    while(a[i]!='\0'){
        printf("%c",a[i]);
        i++;
    }
    return 0;
    
    
   

}