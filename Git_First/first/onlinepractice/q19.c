#include<stdio.h>
int size(char a[]){
    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    return i;
}
int main(){
    
    char a[500];
    scanf("%[^\n]",a);
    size(a);
    printf("%d",size(a));
    return 0;
}