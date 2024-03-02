#include<stdio.h>
#include<string.h>
int main(){
    // char a[]="ashish need to work continues";
    // //printf("%s",a);
    // puts(a);
    char a[40];
    //scanf("%s",&a);//input till space
    gets(a);//entire sentence can be input
    printf("your input was : %s",a);


    return 0;
}