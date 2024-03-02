//Write a program in C to print individual characters of string in reverse order
//Write a program in C to separate the individual characters from a string.
#include<stdio.h>
#include<string.h>
int main(){
    char a[300];
    scanf("%[^\n]",a);
    int i=0;
    char b[200];
    
    while(a[i]!='\0'){
        
        if(a[i]>='a' && a[i]<='z'){
            b[i]=a[i];   
        }
        else{
            printf("-1");
            return 0;
        }    
        i++;
    }
    for(int i=strlen(a)-1;i>=0;i--){
        printf("%c ",b[i]);
    }
    
    return 0;
}
