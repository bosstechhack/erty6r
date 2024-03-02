//write a programme to find the frequency of a charaacter in the string
#include<stdio.h>
#include<string.h>
int main(){
    //char a[]="i dont what to repeat myself twice you know it wery well";
    char a[100];
    
    int i=0,fre=0;
    char n;//what to do if i have to find frequency od each char in a string
    scanf("%c",&n);
    while(a[i]!='\0'){
        
       if(a[i]==n){
             fre++;
         }

        i++;

     }
    

    printf("%d",fre);
    return 0;
}