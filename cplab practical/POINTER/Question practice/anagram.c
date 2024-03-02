//cheak whather yhe string is anagram or not
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
   scanf(" %[^\n]",a);
    char b[100];
    scanf(" %[^\n]",b);
    
    int count =0;
    for(int i=0; i<strlen(a);i++){
        for(int j=0; j<strlen(b);j++){
            if(b[j]==a[i]){
                count++;
                break;
            }
        }
    }
    if(count==strlen(b)){
        printf("given number is anagram");
    }
    else{printf("not anagram number");}    

    return 0;
}