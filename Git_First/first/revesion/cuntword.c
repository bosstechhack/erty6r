//Write a program in C to count the total number of words in a string.
#include<stdio.h>
#include<string.h>
int main(){
    char a[200];
    scanf("%[^\n]",a);
    int i=0,j=1;
    while(a[i] != '\0'){
        if(a[i] == ' '){
            j++;
        }
        i++;
    }
    printf("%d",j);

return 0;
}