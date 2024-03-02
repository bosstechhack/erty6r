//1) Write a program to find the length of a string without using strlen()
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="what are you doing in these day";
    int count=0;
    while(str[count]!='\0'){
        count++;
    }
    printf("%d",count);
    return 0;

}