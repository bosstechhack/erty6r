#include<stdio.h>//basically pointer stor the address or represent by *
#include<string.h>
int main(){
    char str[]="college wallah";
    char* ptr = str;//ptr now points to str[0]
    printf("%p\n",ptr);
    printf("%p\n",&str[0]);
    int i=0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    
    return 0;
}