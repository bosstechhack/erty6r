//Write a program in C to count total number of alphabets, digits and special characters in a string
#include<stdio.h>
#include<ctype.h>


int main(){
    char a[200];
        scanf("%[^\n]",a);
    int  i=0,s=0,digit=0,b=0;
    while(a[i]!='\0'){
        if(a[i]=='!'||a[i]=='.'||a[i]=='$'||a[i]=='#'){
            s++;
        }
        if(isdigit(a[i])){
            digit++;
        }
        i++;
        if(a[i]==' '){
            b++;
        }
    }
    printf("%d\n",(i-s-digit-b));
    printf("%d\n",s);
    printf("%d\n",digit);


    return 0;
}