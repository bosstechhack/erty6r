////3) Write a program to concatenate two strings  not using strcat().
#include<stdio.h>
#include<string.h>
int main(){
    char a[]="now i am good at this work ";
    char b[]="what about you as far i know you still learning";
    strcat(a,b);
    char c[]=a+b;
    
    printf("%s",c[]);

    return 0; 
}