#include<stdio.h>
#include<string.h>
int main(){
    int i,j,temp;

    char a[100];
    puts("Enter a string");
    //scanf("%[^\n]s",a);
    gets(a);
    
    puts("The reverse is ;");
    for(i=0,j=strlen(a)-1;i<=j;i++,j--){
        
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            
            
        
    }
    for(i=0;i<strlen(a);i++){
        printf("%c ",a[i]);
    }
    printf("\n");

    
    return 0;


}