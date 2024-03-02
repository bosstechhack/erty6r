#include<stdio.h>//basically pointer stor the address or represent by *
#include<string.h>
int main(){
    // char str[]="College Wallah";
    // str[0]='p';
    // printf("%s",str);
    char* ptr="College wallah";
    ptr ="pollege wallah";//etire addres change
    printf("%s",ptr);
    
    return 0;
}