//3) Write a program to concatenate two strings using strcat().
#include<stdio.h>
#include<string.h>

int main(){
    char a[]="now i am good at this work ";
    char b[]="what about you as far i know you still learning";
    strcat(a,b);
    
    printf("%s",a);

    return 0;

}