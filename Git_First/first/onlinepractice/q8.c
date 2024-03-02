//write a programe to print revrese of whole string by using nested loop
#include<stdio.h>
#include<string.h>
int main(){
     char a[200];
    char b[200];
    char temp,j=0;
    scanf("%[^\n]", a);
    int i = strlen(a)-1;
    while(i>=0){
        if(a[i]!=' ' && i != 0){
           b[j]=a[i];
           j++;
        }
        else if(a[i]==' '||i == 0){
            if(i == 0){
                printf("%c",a[0]);
            }
            b[j]='\0';
            int k = strlen(b)-1;
            for(int i=0,j=k;i<j;i++,j--){
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
        }
        printf("%s ",b);
        j=0;

        } 
        i--;  
        
    }
    
        
    
    return 0;
}