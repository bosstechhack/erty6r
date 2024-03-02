#include<stdio.h>
#include<string.h>
int main(){
    char a[1000];
    gets(a);
    int i=0;
    while(a[i]!='\0'){   
      if(a[i]>=97 && a[i]<=122){
        a[i]=a[i]-32;  
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