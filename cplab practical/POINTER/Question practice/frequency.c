//write a program to find frequency of a element

#include<stdio.h>
#include<string.h>
int main(){
    char a[200];
    int m=0;
    char b[200];
    scanf("%[^\n]",a);
    int count;
    for(int i=0;i<strlen(a);i++){
        count=1;
        for(int j=i+1;j<strlen(a);j++){
            if(a[i]==a[j]){
                count = 0;
                break;
            }           
        }
        if(count==1){
        b[m]=a[i];
        m++;}
    }
    b[m]='\0';
    
    for(int i=0;i<strlen(b);i++){
        int count=0;
        for(int k=0;k<strlen(a);k++){
           if(b[i]==a[k]){
            count++;
           }
        }
        printf("freuency of %c %d\n",b[i],count);
    }
   

    
    


    return 0;
}
