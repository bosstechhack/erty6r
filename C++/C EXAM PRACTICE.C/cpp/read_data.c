//read data from console and write it to file
// #include<stdio.h>
// void main(){
//     FILE*tp;
//     char ch;
//     tp=fopen("yourfile.txt","w");
//     ch=getchar();
//     fputc(ch,tp);
//     printf("%c",ch);
//     fclose(tp);
// }
//read data from file and display it on screen
#include<stdio.h>
void main(){
    FILE*tp;
    char ch;
    tp=fopen("yourfile.txt","r");
    ch=fgetc(tp);
    
    printf("%c",ch);
    fclose(tp);
}