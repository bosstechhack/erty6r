#include<stdio.h>
int main(){
    char arr[]="my name is ashish ";
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
        
    }
    printf("\n");
    printf("Size of string: %d",i);
    return 0;
}